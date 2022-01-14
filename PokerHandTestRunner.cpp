#include <iostream>
#include "Tests/PokerHandScoreTests.cpp"
#include "Tests/PokerHandRankTests.cpp"
#include "Tests/PokerHandComparisonTests.cpp"

int main() {

    std::cout << "Starting test run.\n\n";
    grabyo::pokerHandRankTests::runPokerHandRankTests();
    grabyo::pokerHandScoreTests::runPokerHandScoreTests();
    grabyo::pokerHandComparisonTests::runPokerHandComparisonTests();
	std::cout << "All tests passed.\n\n";

	return EXIT_SUCCESS;
}
