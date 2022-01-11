#pragma once

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

		PokerHand(std::string_view hand) : hand(hand) {}

		Comparison compareWith(const PokerHand& opponent);

	private:

		std::string hand;
	};
}
