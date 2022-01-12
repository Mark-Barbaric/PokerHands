#include <assert.h>
#include <string>
#include <string_view>
#include <iostream>
#include "../Lib/PokerHand.h"
#include "../Lib/StringHelpers.h"

namespace grabyo::stringHelperTests{

    inline void splitStringTests(){
        grabyo::PokerHand hand{"TD 9S QS QH TH"};
        const std::vector<std::string> handCards = grabyo::stringHelpers::splitString(hand.getCards(), ' ');
        const std::vector<std::string> expectedResult = {"TD", "9S", "QS", "QH", "TH"};
        assert(expectedResult == handCards);
        std::cout << "Split String Tests Succeeded. \n";
    }

    inline void runStringHelperTests(){
        splitStringTests();
    }

}