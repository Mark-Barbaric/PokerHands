#include <iostream>
#include "Tests/PokerHandScoreTests.cpp"
#include "Tests/PokerHandRankTests.cpp"
#include "Tests/StringHelperTests.cpp"

int main() {

    std::cout << "Starting test run.\n";
	grabyo::stringHelperTests::runStringHelperTests();
    grabyo::pokerHandRankTests::runPokerHandRankTests();
    grabyo::pokerHandScoreTests::runPokerHandScoreTests();
	std::cout << "All tests passed\n";

	return EXIT_SUCCESS;
}
