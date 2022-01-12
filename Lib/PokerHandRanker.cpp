//
// Created by Mark Barbaric on 12/01/2022.
//

#include "PokerHandRanker.h"

grabyo::PokerHandRanker::PokerHandRanker(std::string_view pokerHand):m_pokerHand(pokerHand)
{
    generateHandData();
}

void grabyo::PokerHandRanker::generateHandData()
{
    if(m_pokerHand.empty()){
        std::cout << "Poker Hand cannot be empty!.\n" << std::endl;
        return;
    }
    const auto pokerHands = stringHelpers::splitString(m_pokerHand, ' ');

    auto min = INT_MAX, max = INT_MIN;
    for(auto & hand : pokerHands){
        std::string currentCard = hand.substr(0, hand.size() - 1);
        std::string currentSuite = hand.substr(hand.size() - 1, hand.size());
        min = std::min(pokerHandData::cardValues.at(currentCard), min);
        max = std::max(pokerHandData::cardValues.at(currentCard), max);
        m_cardCount[currentCard]++;
        m_suitCount[currentSuite]++;
        m_highestCard = max;
    }
    checkCardCount();
    containsFlush = m_suitCount.size() == 1;
    containsStraight = (max - min + 1 == 5) && m_cardCount.size() == 5;

    if(m_numPairs == 0 && m_numTrips == 0 && m_numQuads == 0
    && !containsFlush && !containsStraight){
        m_pokerHandType = pokerHandData::PokerHandType::HighCard;
        return;
    }

    if(m_numQuads > 0 || m_numTrips > 0 || m_numPairs > 0){
        classifyAsPairTripOrQuad();
    } else {
        classifyAsStraightFlush();
    }
}

void grabyo::PokerHandRanker::checkCardCount()
{
    //need to know kickers
    for(auto & it : m_cardCount){
        if(it.second == 4){
            m_numQuads++;
        }
        else if(it.second == 2){
            m_numPairs++;
        } else if(it.second == 3){
            m_numTrips++;
        }
    }
}

void grabyo::PokerHandRanker::classifyAsPairTripOrQuad()
{
    if (m_numQuads == 1) {
        m_pokerHandType = pokerHandData::PokerHandType::FourOfaKind;
    } else if (m_numPairs == 1) {
        m_pokerHandType = m_numTrips == 1 ? pokerHandData::PokerHandType::FullHouse
                    : pokerHandData::PokerHandType::OnePair;
    } else if (m_numPairs == 2) {
        m_pokerHandType = pokerHandData::PokerHandType::TwoPair;
    } else if (m_numTrips == 1) {
        m_pokerHandType = pokerHandData::PokerHandType::ThreeOfAKind;
    }
}

void grabyo::PokerHandRanker::classifyAsStraightFlush()
{
    if(containsStraight && !containsFlush){
        m_pokerHandType = pokerHandData::PokerHandType::Straight;
    } else if(!containsStraight && containsFlush){
        m_pokerHandType = pokerHandData::PokerHandType::Flush;
    } else {
        m_pokerHandType = m_highestCard == 14 ? pokerHandData::PokerHandType::RoyalFlush :
                pokerHandData::PokerHandType::StraightFlush;
    }
}