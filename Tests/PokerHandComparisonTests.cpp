#include <cassert>
#include <iostream>
#include "../Lib/PokerHand.h"

namespace grabyo::pokerHandComparisonTests{

    inline void comparisonTests() {
        std::cout << "Running Poker Hand Comparison Tests.\n\n";
        grabyo::PokerHand hand{"TD AS QS KH TH"};
        grabyo::PokerHand opponent{"TD AS QS KH 2H"};
        assert(hand.compareWith(opponent) == grabyo::PokerHand::Comparison::Win);

        grabyo::PokerHand hand2{"9D 10D JD QD KD"};
        grabyo::PokerHand opponent2{"10H JH QH KH AH"};
        assert(hand2.compareWith(opponent2) == grabyo::PokerHand::Comparison::Loss);

        grabyo::PokerHand hand3{"2D 2C QD KH AS"};
        grabyo::PokerHand opponent3{"3H 3C 4C 5D 2S"};
        assert(hand3.compareWith(opponent3) == grabyo::PokerHand::Comparison::Loss);

        grabyo::PokerHand hand4{"2D 2C 3D 4D 5D"};
        grabyo::PokerHand opponent4{"2S 2H 3C 4S 5C"};
        assert(hand4.compareWith(opponent4) == grabyo::PokerHand::Comparison::Tie);

        grabyo::PokerHand hand5{"TD JD QD KD AD"};
        grabyo::PokerHand opponent5{"TC JC QC KC AC"};
        assert(hand5.compareWith(opponent5) == grabyo::PokerHand::Comparison::Tie);

        std::cout << "Poker Hand Comparison Tests Succeeded.\n\n";
    }

    inline void runPokerHandComparisonTests(){
        comparisonTests();
    }
}