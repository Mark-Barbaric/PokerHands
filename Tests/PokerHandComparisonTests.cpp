#include <cassert>
#include "../Lib/PokerHand.h"

namespace grabyo::pokerHandTests{

    void testCaseOne() {
        grabyo::PokerHand hand{"TD AS QS KH TH"};
        grabyo::PokerHand opponent{"TD AS QS KH TH"};
        assert(hand.compareWith(opponent) == grabyo::PokerHand::Comparison::Win);
    }

    void runPokerHandTests(){
        testCaseOne();
    }
}