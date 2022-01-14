#include <cassert>
#include <iostream>
#include "../Lib/PokerHand.h"

namespace grabyo::pokerHandComparisonTests{

    inline void comparisonTests() {
        std::cout << "Running Poker Hand Comparison Tests.\n\n";
        PokerHand highCard1{"3D AS QS KC 2H"};
        PokerHand highCard2{"3D JC QD KC 2H"};
        PokerHand highCard3{"3D AD QS KC 2H"};
        assert(highCard1.compareWith(highCard2) == PokerHand::Comparison::Win);
        std::cout << "High Card1 vs High Card2 Test Passed.\n";
        assert(highCard3.compareWith(highCard3) == PokerHand::Comparison::Tie);
        std::cout << "High Card3 vs High Card4 Test Passed.\n";

        PokerHand pair1{"2D 5S 2S 3H 4C"};
        PokerHand pair2{"2D 2C QD KH AS"};
        PokerHand pair3{"2D 2S QS KC AD"};
        assert(pair1.compareWith(highCard3) == PokerHand::Comparison::Win);
        std::cout << "Pair1 vs High Card3 Test Passed.\n";
        assert(pair1.compareWith(pair2) == PokerHand::Comparison::Loss);
        std::cout << "Pair2 vs Pair3 Test Passed.\n";
        assert(pair2.compareWith(pair3) == PokerHand::Comparison::Tie);
        std::cout << "Pair2 vs Pair4 Test Passed.\n";

        PokerHand twoPair1{"2D 2C 3D 3H 4S"};
        PokerHand twoPair2{"2H 2S 3S 3C AS"};
        PokerHand twoPair3{"2H 2S 3S 3C AC"};
        assert(twoPair1.compareWith(twoPair2) == PokerHand::Comparison::Loss);
        std::cout << "Two Pair1 vs Two Pair2 Test Passed.\n";
        assert(twoPair2.compareWith(twoPair3) == PokerHand::Comparison::Tie);
        std::cout << "Two Pair2 vs Two Pair3 Test Passed.\n";
        assert(twoPair2.compareWith(pair3) == PokerHand::Comparison::Win);
        std::cout << "Two Pair2 vs Pair3 Test Passed.\n";

        PokerHand trips1 {"3H 3D 3S 2D AC"};
        PokerHand trips2 {"2H 2D 2S AC 3S"};
        assert(trips1.compareWith(trips2) == PokerHand::Comparison::Win);
        std::cout << "Trips1 vs Trips2 Test Passed.\n";
        assert(pair2.compareWith(trips2) == PokerHand::Comparison::Loss);
        std::cout << "Pair2 vs Trips2 Test Passed.\n";
        assert(twoPair1.compareWith(trips2) == PokerHand::Comparison::Loss);
        std::cout << "Two Pair1 vs Trips2 Test Passed.\n";

        PokerHand straight1{"9D TH JD QC KD"};
        PokerHand straight2{"TH JD QC KD AH"};
        PokerHand straight3{"9D TH JH QD KD"};
        assert(straight1.compareWith(straight2) == PokerHand::Comparison::Loss);
        std::cout << "Straight1 vs Straight2 Test Passed.\n";
        assert(straight1.compareWith(trips2) == PokerHand::Comparison::Win);
        std::cout << "Straight1 vs Trips2 Test Passed.\n";
        assert(straight1.compareWith(straight3) == PokerHand::Comparison::Tie);
        std::cout << "Straight1 vs Straight3 Test Passed.\n";

        PokerHand flush1 {"KH 2H QH 5H 3H"};
        PokerHand fullHouse1{"KD KH KC 3H 3D"};
        PokerHand quads1{"KD KH KC KS 3H"};
        PokerHand quads2{"QD QH QC QS 5H"};
        assert(flush1.compareWith(straight1) == PokerHand::Comparison::Win);
        std::cout << "Flush1 vs Straight1 Test Passed.\n";
        assert(fullHouse1.compareWith(flush1) == PokerHand::Comparison::Win);
        std::cout << "Full House1 vs Flush1 Test Passed.\n";
        assert(fullHouse1.compareWith(quads1) == PokerHand::Comparison::Loss);
        std::cout << "Full House1 vs Quads1 Test Passed.\n";
        assert(straight1.compareWith(fullHouse1) == PokerHand::Comparison::Loss);
        std::cout << "Straight1 vs Full House1 Test Passed.\n";
        assert(straight1.compareWith(quads1) == PokerHand::Comparison::Loss);
        std::cout << "Straight1 vs Quads1 Test Passed.\n";
        assert(quads1.compareWith(quads2) == PokerHand::Comparison::Win);
        std::cout << "Quads1 vs Quads2 Test Passed.\n";

        PokerHand straightFlush1{"2D 3D 4D 5D 6D"};
        PokerHand straightFlush2{"2C 3C 4C 5C 6C"};
        assert(straightFlush1.compareWith(quads1) == PokerHand::Comparison::Win);
        std::cout << "Straight Flush1 vs Quads1 Test Passed.\n";
        assert(flush1.compareWith(straightFlush1) == PokerHand::Comparison::Loss);
        std::cout << "Flush1 vs Straight Flush1 Test Passed.\n";
        assert(straightFlush1.compareWith(fullHouse1) == PokerHand::Comparison::Win);
        std::cout << "Straight Flush1 vs Full House1 Test Passed.\n";
        assert(pair1.compareWith(straightFlush2) == PokerHand::Comparison::Loss);
        std::cout << "Pair1 vs Straight Flush2 Test Passed.\n";
        assert(straightFlush1.compareWith(straightFlush2) == PokerHand::Comparison::Tie);
        std::cout << "Straight Flush1 vs Straight Flush2 Test Passed.\n";

        PokerHand royalFlush1{"TD JD QD KD AD"};
        PokerHand royalFlush2{"TC JC QC KC AC"};
        assert(royalFlush1.compareWith(royalFlush2) == PokerHand::Comparison::Tie);
        std::cout << "Royal Flush1 vs Royal Flush2 Test Passed.\n";
        assert(straightFlush1.compareWith(royalFlush2) == PokerHand::Comparison::Loss);
        std::cout << "Straight Flush1 vs Royal Flush2 Test Passed.\n";
        assert(highCard3.compareWith(royalFlush2) == PokerHand::Comparison::Loss);
        std::cout << "High Card3 vs Royal Flush2 Test Passed.\n";
        assert(royalFlush1.compareWith(twoPair2) == PokerHand::Comparison::Win);
        std::cout << "Royal Flush1 vs Two Pair2 Test Passed.\n";
        assert(fullHouse1.compareWith(royalFlush2) == PokerHand::Comparison::Loss);
        std::cout << "Full House1 vs Royal Flush2 Test Passed.\n";

        //Casino Royal test
        PokerHand bond {"5S 7S 6S 8S 4S"};
        PokerHand jg {"KS QS 8S 7S 5S"};
        PokerHand lc {"AH AS AD 8S 8C"};
        PokerHand og {"8C 8D 8S AS AD"};
        assert(bond.compareWith(jg) == PokerHand::Comparison::Win);
        assert(lc.compareWith(jg) == PokerHand::Comparison::Win);
        assert(lc.compareWith(og) == PokerHand::Comparison::Win);
        assert(jg.compareWith(og) == PokerHand::Comparison::Loss);
        assert(lc.compareWith(bond) == PokerHand::Comparison::Loss);
        std::cout << "Casino Royal Tests Passed.\n";
        std::cout << "Poker Hand Comparison Tests Succeeded.\n\n";
    }

    inline void runPokerHandComparisonTests(){
        comparisonTests();
    }
}