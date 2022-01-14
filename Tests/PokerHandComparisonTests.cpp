#include <cassert>
#include <iostream>
#include "../Lib/PokerHand.h"

namespace grabyo::pokerHandComparisonTests{

    inline void comparisonTests() {
        std::cout << "Running Poker Hand Comparison Tests.\n\n";
        grabyo::PokerHand highCard1{"3D AS QS KC 2D"};
        grabyo::PokerHand highCard2{"3S JC QD KH 2H"};
        grabyo::PokerHand highCard3{"TD AS QS KH 2H"};
        grabyo::PokerHand highCard4{"TC AH QD KD 2S"};
        assert(highCard1.compareWith(highCard2) == grabyo::PokerHand::Comparison::Win);
        std::cout << "High Card1 vs High Card2 Test Passed.\n";
        assert(highCard3.compareWith(highCard4) == grabyo::PokerHand::Comparison::Tie);
        std::cout << "High Card3 vs High Card4 Test Passed.\n";

        grabyo::PokerHand pair1{"2D 5S 2S 3H 4C"};
        grabyo::PokerHand pair2{"2D 2C QD KH AS"};
        grabyo::PokerHand pair3{"3H 3C 4C 5D 2S"};
        grabyo::PokerHand pair4{"2H 2D QS KC AD"};
        assert(pair1.compareWith(highCard3) == grabyo::PokerHand::Comparison::Win);
        std::cout << "Pair1 vs High Card3 Test Passed.\n";
        assert(pair2.compareWith(pair3) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Pair2 vs Pair3 Test Passed.\n";
        assert(pair2.compareWith(pair4) == grabyo::PokerHand::Comparison::Tie);
        std::cout << "Pair2 vs Pair4 Test Passed.\n";

        grabyo::PokerHand twoPair1{"2D 2C 3D 3H 4S"};
        grabyo::PokerHand twoPair2{"2H 2S 3S 3C AS"};
        grabyo::PokerHand twoPair3{"2H 2S 3S 3C AC"};
        assert(twoPair1.compareWith(twoPair2) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Two Pair1 vs Two Pair2 Test Passed.\n";
        assert(twoPair2.compareWith(twoPair3) == grabyo::PokerHand::Comparison::Tie);
        std::cout << "Two Pair2 vs Two Pair3 Test Passed.\n";
        assert(pair3.compareWith(twoPair2) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Pair3 vs Two Pair2 Test Passed.\n";

        grabyo::PokerHand trips1 {"3H 3D 3S 2D 4C"};
        grabyo::PokerHand trips2 {"2H 2D 2S AC KS"};
        assert(trips1.compareWith(trips2) == grabyo::PokerHand::Comparison::Win);
        std::cout << "Trips1 vs Trips2 Test Passed.\n";
        assert(pair2.compareWith(trips2) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Pair2 vs Trips2 Test Passed.\n";
        assert(twoPair1.compareWith(trips2) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Two Pair1 vs Trips2 Test Passed.\n";

        grabyo::PokerHand straight1{"9D TH JD QC KD"};
        grabyo::PokerHand straight2{"TH JH QH KH AH"};
        grabyo::PokerHand straight3{"9C TC JH QD KS"};
        assert(straight1.compareWith(straight2) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Straight1 vs Straight2 Test Passed.\n";
        assert(straight1.compareWith(trips2) == grabyo::PokerHand::Comparison::Win);
        std::cout << "Straight1 vs Trips2 Test Passed.\n";
        assert(straight1.compareWith(straight3) == grabyo::PokerHand::Comparison::Tie);
        std::cout << "Straight1 vs Straight3 Test Passed.\n";

        grabyo::PokerHand fullHouse1{"KD KH KC 3S 3D"};
        grabyo::PokerHand flush1 {"7H 2H JH 5H 3H"};
        grabyo::PokerHand quads1{"KD KH KC KS 3D"};
        grabyo::PokerHand quads2{"QD QH QC QS 4D"};
        assert(fullHouse1.compareWith(flush1) == grabyo::PokerHand::Comparison::Win);
        std::cout << "Full House1 vs Flush1 Test Passed.\n";
        assert(straight1.compareWith(fullHouse1) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Straight1 vs Full House1 Test Passed.\n";
        assert(straight1.compareWith(quads1) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Straight1 vs Quads1 Test Passed.\n";
        assert(quads1.compareWith(quads2) == grabyo::PokerHand::Comparison::Win);
        std::cout << "Quads1 vs Quads2 Test Passed.\n";
        assert(fullHouse1.compareWith(quads1) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Full House1 vs Quads1 Test Passed.\n";

        grabyo::PokerHand straightFlush1{"2D 3D 4D 5D 6D"};
        grabyo::PokerHand straightFlush2{"2C 3C 4C 5C 6C"};
        assert(straightFlush1.compareWith(straightFlush2) == grabyo::PokerHand::Comparison::Tie);
        std::cout << "Straight Flush1 vs Straight Flush2 Test Passed.\n";
        assert(flush1.compareWith(straightFlush1) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Flush1 vs Straight Flush1 Test Passed.\n";
        assert(straightFlush1.compareWith(fullHouse1) == grabyo::PokerHand::Comparison::Win);
        std::cout << "Straight Flush1 vs Full House1 Test Passed.\n";
        assert(straight1.compareWith(straightFlush2) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Straight1 vs Straight Flush2 Test Passed.\n";
        assert(straightFlush2.compareWith(trips2) == grabyo::PokerHand::Comparison::Win);
        std::cout << "Straight Flush2 vs Trips2 Test Passed.\n";

        grabyo::PokerHand royalFlush1{"TD JD QD KD AD"};
        grabyo::PokerHand royalFlush2{"TC JC QC KC AC"};
        assert(royalFlush1.compareWith(royalFlush2) == grabyo::PokerHand::Comparison::Tie);
        std::cout << "Royal Flush1 vs Royal Flush2 Test Passed.\n";
        assert(straightFlush1.compareWith(royalFlush2) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Straight Flush1 vs Royal Flush2 Test Passed.\n";
        std::cout << "Poker Hand Comparison Tests Succeeded.\n\n";
    }

    inline void runPokerHandComparisonTests(){
        comparisonTests();
    }
}