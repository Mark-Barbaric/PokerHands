#ifndef POKER_HAND_H
#define POKER_HAND_H

#include <string>
#include <string_view>
#include <cmath>
#include <map>
#include <sstream>

namespace grabyo {

	class PokerHand {
	public:

		enum class Comparison : char {
			Tie = 0,
			Win = 1,
			Loss = 2
		};

        enum class HandRank : char {
            Unclassified = 0,
            HighCard = 1,
            OnePair = 2,
            TwoPair = 3,
            ThreeOfAKind = 4,
            Straight = 5,
            Flush = 6,
            FullHouse = 7,
            FourOfaKind = 8,
            StraightFlush = 9,
            RoyalFlush = 10
        };

        inline int faceToValue(char c){
            if(c<='9') {
                return c-'0';
            }
            switch(c){
                case 'T':
                    return 10;
                case 'J':
                    return 11;
                case 'Q':
                    return 12;
                case 'K':
                    return 13;
                case 'A':
                    return 14;
                default:
                    return 0;
            }
        }

        explicit PokerHand(std::string_view hand);
		Comparison compareWith(const PokerHand& opponent);
        [[nodiscard]] HandRank getHandRank() const {return m_handRank;}
		[[nodiscard]] int getHandScore() const {return m_handScore;}

	private:
	    void analyzeCards();
		void setHandRank();
		void analyzeCardCount();
		std::string m_hand;
        HandRank m_handRank {HandRank::Unclassified};
		int m_cards[5]{};
		int m_handScore {0};
		bool m_containsStraight {false};
		bool m_containsFlush {false};
		int m_highestCardValue{0};
		std::map<char,int> m_cardCount;
		std::map<char,int> m_suitCount;
		int m_numPairs {0};
		int m_numTrips {0};
		int m_numQuads {0};
	};
}

#endif