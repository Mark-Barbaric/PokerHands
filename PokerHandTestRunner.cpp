#include <iostream>
#include "Tests/PokerRankerTests.cpp"
#include "Tests/StringHelperTests.cpp"

int main() {

    std::cout << "Starting test run.\n";
	grabyo::stringHelperTests::runStringHelperTests();
    grabyo::pokerHandTests::runPokerHandTests();
	std::cout << "All tests passed\n";

	return EXIT_SUCCESS;
}
