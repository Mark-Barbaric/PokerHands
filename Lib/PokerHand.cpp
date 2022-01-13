#include "PokerHand.h"

grabyo::PokerHand::PokerHand(std::string_view hand) :m_hand(hand)
{
    setHandRank();
}

grabyo::PokerHand::Comparison grabyo::PokerHand::compareWith(const PokerHand& opponent) {

	// Your code here ...
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

void grabyo::PokerHand::setHandRank()
{
    const auto pokerHands = stringHelpers::splitString(m_hand, ' ');
    //optimise with bitwise operation
    std::map<char,int> suitCount;
    std::map<char,int> cardCount;
    auto max = INT_MIN, min = INT_MAX;

    for(int i = 0; i < pokerHands.size(); ++i){
        const auto curCard = pokerHands[i][0];
        const auto curSuit = pokerHands[i][1];
        m_cards[i].setValue(curCard);
        max = std::max(m_cards[i].value, max);
        min = std::min(m_cards[i].value, min);
        suitCount[curSuit]++;
        cardCount[curCard]++;
    }

    m_containsFlush = suitCount.size() == 1;
    m_highestCardValue = max;
    m_containsStraight = (max - min + 1) == 5 && cardCount.size() == 5;

    if(m_containsFlush || m_containsStraight){
        m_handScore = m_highestCardValue * 10000;
        if(m_containsStraight && m_containsFlush){
            m_handRank = m_highestCardValue == 14 ? pokerDefs::HandRank::RoyalFlush : pokerDefs::HandRank::StraightFlush;
        } else if(m_containsStraight && !m_containsFlush){
            m_handRank = pokerDefs::HandRank::Straight;
        } else if(!m_containsStraight && m_containsFlush){
            m_handRank = pokerDefs::HandRank::Flush;
        }
    } else {
        int tripCount = 0, pairCount = 0, quadCount = 0;

        for(auto& c : cardCount){
            if(c.second > 1){
                if(c.second == 3){
                    tripCount++;
                } else if(c.second == 2){
                    pairCount++;
                } else if(c.second == 4){
                    quadCount++;
                }
                m_handScore += (pokerDefs::faceToValue(c.first) * c.second) *
                        std::floor(std::pow(10, c.second - 1));
            }else {
                m_handScore += pokerDefs::faceToValue(c.first);
            }
        }

        if(quadCount == 0 && tripCount == 0 && pairCount == 0){
            m_handRank = pokerDefs::HandRank::HighCard;
        } else {
            if(quadCount){
                m_handRank = pokerDefs::HandRank::FourOfaKind;
            } else if(tripCount){
                m_handRank = pairCount ? pokerDefs::HandRank::FullHouse : pokerDefs::HandRank::ThreeOfAKind;
            } else if(pairCount && !tripCount){
                m_handRank = pairCount == 2 ? pokerDefs::HandRank::TwoPair : pokerDefs::HandRank::OnePair;
            }
        }
    }
}