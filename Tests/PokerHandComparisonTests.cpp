#include <cassert>
#include <iostream>
#include "../Lib/PokerHand.h"

namespace grabyo::pokerHandComparisonTests{

    inline void comparisonTests() {
        std::cout << "Running Poker Hand Comparison Tests.\n\n";
        grabyo::PokerHand highCard1{"3D AS QS KC 2D"};
        grabyo::PokerHand highCard2{"3S JC QD KH 2H"};
        assert(highCard1.compareWith(highCard2) == grabyo::PokerHand::Comparison::Win);
        std::cout << "High Card vs High Card Test Passed.\n";

        grabyo::PokerHand pair1{"TD AS QS KH TH"};
        grabyo::PokerHand highCard3{"TD AS QS KH 2H"};
        assert(pair1.compareWith(highCard3) == grabyo::PokerHand::Comparison::Win);
        std::cout << "Pair vs High Card Test Passed.\n";

        grabyo::PokerHand pair2{"2D 2C QD KH AS"};
        grabyo::PokerHand pair3{"3H 3C 4C 5D 2S"};
        assert(pair2.compareWith(pair3) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Pair vs Pair Test Passed.\n";

        grabyo::PokerHand twoPair1{"2D 2C 3D 3H 4S"};
        grabyo::PokerHand twoPair2{"2H 2S 3S 3C AS"};
        assert(twoPair1.compareWith(twoPair2) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Two Pair vs Two Pair Test Passed.\n";
        assert(pair3.compareWith(twoPair2) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Pair vs Two Pair Test Passed.\n";

        grabyo::PokerHand trips1 {"3H 3D 3S 2D 4C"};
        grabyo::PokerHand trips2 {"2H 2D 2S AC KS"};
        assert(trips1.compareWith(trips2) == grabyo::PokerHand::Comparison::Win);
        std::cout << "Trips vs Trips Test Passed.\n";
        assert(pair2.compareWith(trips2) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Pair vs Trips Test Passed.\n";
        assert(twoPair1.compareWith(trips2) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Two Pair vs Trips Test Passed.\n";

        grabyo::PokerHand straight1{"9D TH JD QC KD"};
        grabyo::PokerHand straight2{"TH JH QH KH AH"};
        assert(straight1.compareWith(straight2) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Straight vs Straight Test Passed.\n";
        assert(straight1.compareWith(trips2) == grabyo::PokerHand::Comparison::Win);
        std::cout << "Straight vs Trips Test Passed.\n";

        grabyo::PokerHand fullHouse{"KD KH KC 3S 3D"};
        grabyo::PokerHand flush {"7H 2H JH 5H 3H"};
        grabyo::PokerHand quads1{"KD KH KC KS 3D"};
        grabyo::PokerHand quads2{"QD QH QC QS 4D"};
        assert(fullHouse.compareWith(flush) == grabyo::PokerHand::Comparison::Win);
        std::cout << "Full House vs Flush Test Passed.\n";
        assert(straight1.compareWith(fullHouse) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Straight vs Full House Test Passed.\n";
        assert(straight1.compareWith(quads1) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Straight vs Quads Test Passed.\n";
        assert(quads1.compareWith(quads2) == grabyo::PokerHand::Comparison::Win);
        std::cout << "Quads1 vs Quads2 Test Passed.\n";
        assert(fullHouse.compareWith(quads1) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Full House vs Quads Test Passed.\n";

        grabyo::PokerHand straightFlush1{"2D 3D 4D 5D 6D"};
        grabyo::PokerHand straightFlush2{"2C 3C 4C 5C 6C"};
        assert(straightFlush1.compareWith(straightFlush1) == grabyo::PokerHand::Comparison::Tie);
        std::cout << "Straight Flush vs Straight Flush Test Passed.\n";
        assert(flush.compareWith(straightFlush1) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Flush vs Straight Flush Test Passed.\n";
        assert(straightFlush1.compareWith(fullHouse) == grabyo::PokerHand::Comparison::Win);
        std::cout << "Straight Flush vs Full House Test Passed.\n";
        assert(straight1.compareWith(straightFlush2) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Straight vs Straight Flush Test Passed.\n";
        assert(straightFlush2.compareWith(trips2) == grabyo::PokerHand::Comparison::Win);
        std::cout << "Straight Flush vs Trips Test Passed.\n";

        grabyo::PokerHand royalFlush1{"TD JD QD KD AD"};
        grabyo::PokerHand royalFlush2{"TC JC QC KC AC"};
        assert(royalFlush1.compareWith(royalFlush2) == grabyo::PokerHand::Comparison::Tie);
        std::cout << "Royal Flush vs Royal Flush Test Passed.\n";
        assert(straightFlush1.compareWith(royalFlush2) == grabyo::PokerHand::Comparison::Loss);
        std::cout << "Straight Flush vs Royal Flush Test Passed.\n";
        std::cout << "Poker Hand Comparison Tests Succeeded.\n\n";
    }

    inline void runPokerHandComparisonTests(){
        comparisonTests();
    }
}