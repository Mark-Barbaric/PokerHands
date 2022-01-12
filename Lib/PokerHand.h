#ifndef POKER_HAND_H
#define POKER_HAND_H

#include <string>
#include <string_view>

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

	private:

		std::string m_hand;
		int m_pokerHandRank {-1};
	};
}

#endif