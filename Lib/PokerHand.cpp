#include "PokerHand.h"

grabyo::PokerHand::PokerHand(std::string_view hand) :m_hand(hand)
{
    analyzeCards();
}

grabyo::PokerHand::Comparison grabyo::PokerHand::compareWith(const PokerHand& opponent)
{
	if(m_handRank > opponent.m_handRank){
	    return Comparison::Win;
	} else if(m_handRank < opponent.m_handRank){
	    return Comparison::Loss;
	} else {
	    if(m_handScore > opponent.m_handScore){
	        return Comparison::Win;
	    } else if (m_handScore < opponent.m_handScore) {
	        return Comparison::Loss;
	    } else {
	        return Comparison::Tie;
	    }
	}
}

void grabyo::PokerHand::analyzeCards()
{
    std::stringstream ss (m_hand);
    std::string pokerHand;

    auto max = INT_MIN, min = INT_MAX, i = 0;

    while(std::getline(ss, pokerHand, ' ')){

        const auto curCard = pokerHand[0];
        const auto curSuit = pokerHand[1];
        m_cards[i] = pokerDefs::faceToValue(curCard);
        max = std::max(m_cards[i], max);
        min = std::min(m_cards[i], min);
        m_suitCount[curSuit]++;
        m_cardCount[curCard]++;
        i++;
    }

    m_containsFlush = m_suitCount.size() == 1;
    m_highestCardValue = max;
    m_containsStraight = (max - min + 1) == 5 && m_cardCount.size() == 5;
    setHandRank();
}

void grabyo::PokerHand::setHandRank()
{
    if(m_containsFlush || m_containsStraight){
        m_handScore = m_highestCardValue * 100000;
        if(m_containsStraight && m_containsFlush){
            m_handRank = m_highestCardValue == 14 ? pokerDefs::HandRank::RoyalFlush : pokerDefs::HandRank::StraightFlush;
        } else if(m_containsStraight && !m_containsFlush){
            m_handRank = pokerDefs::HandRank::Straight;
        } else if(!m_containsStraight && m_containsFlush){
            m_handRank = pokerDefs::HandRank::Flush;
        }
    } else {
        analyzeCardCount();
        if(m_numQuads == 0 && m_numTrips == 0 && m_numPairs == 0){
            m_handRank = pokerDefs::HandRank::HighCard;
        } else {
            if(m_numQuads){
                m_handRank = pokerDefs::HandRank::FourOfaKind;
            } else if(m_numTrips){
                m_handRank = m_numPairs ? pokerDefs::HandRank::FullHouse : pokerDefs::HandRank::ThreeOfAKind;
            } else if(m_numPairs && !m_numTrips){
                m_handRank = m_numPairs == 2 ? pokerDefs::HandRank::TwoPair : pokerDefs::HandRank::OnePair;
            }
        }
    }
}

void grabyo::PokerHand::analyzeCardCount()
{
    for(auto& c : m_cardCount){
        if(c.second > 1){
            if(c.second == 3){
                m_numTrips++;
            } else if(c.second == 2){
                m_numPairs++;
            } else if(c.second == 4){
                m_numQuads++;
            }
            m_handScore += (pokerDefs::faceToValue(c.first) * c.second) * static_cast<int>(std::pow(10, c.second));
        }else {
            m_handScore += pokerDefs::faceToValue(c.first);
        }
    }
}