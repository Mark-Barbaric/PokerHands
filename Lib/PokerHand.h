#ifndef POKER_HAND_H
#define POKER_HAND_H

#include <string>
#include <string_view>
#include <cmath>
#include "StringHelpers.h"
#include "PokerDefs.h"

namespace grabyo {

	class PokerHand {
	public:

		enum class Comparison : char {
			Tie = 0,
			Win = 1,
			Loss = 2
		};

		explicit PokerHand(std::string_view hand);
		Comparison compareWith(const PokerHand& opponent);
		[[nodiscard]] std::string getCards() const {return m_hand;}
        [[nodiscard]] pokerDefs::HandRank getHandRank() const {return m_handRank;}
		[[nodiscard]] int getHandScore() const {return m_handScore;}

	private:
	    void analyzeCards();
		void setHandRank();
		void analyzeCardCount();
		std::string m_hand;
        pokerDefs::HandRank m_handRank {pokerDefs::HandRank::Unclassified};
		pokerDefs::Card m_cards[5];
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