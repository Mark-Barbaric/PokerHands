#include <cassert>
#include "../Lib/PokerHand.h"
#include "../Lib/PokerHandRanker.h"

namespace pokerHandTests{

    void testCaseOne() {
        grabyo::PokerHand hand{"TD 9S QS QH TH"};
        grabyo::PokerHand opponent{"5D 5S QC 9H QH"};
        assert(hand.compareWith(opponent) == grabyo::PokerHand::Comparison::Win);
    }

    void runPokerHandTests(){
        testCaseOne();
    }
}