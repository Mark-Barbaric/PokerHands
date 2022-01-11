#include <cassert>
#include <iostream>

#include "PokerHand.h"

namespace {

	void testCaseOne() {
		grabyo::PokerHand hand{ "TD 9S QS QH TH" };
		grabyo::PokerHand opponent{ "5D 5S QC 9H QH" };
		assert(hand.compareWith(opponent) == grabyo::PokerHand::Comparison::Win);
	}


    v
}

int main() {

	testCaseOne();

	std::cout << "All tests passed\n";

	return EXIT_SUCCESS;
}
