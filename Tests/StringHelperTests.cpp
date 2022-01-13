#include <cassert>
#include <string>
#include <iostream>
#include "../Lib/StringHelpers.h"

namespace grabyo::stringHelperTests{

    inline void splitStringTests(){
        std::cout << "Starting String Tests.\n\n";
        std::string hand ="TD 9S QS QH TH";
        const std::vector<std::string> handCards = grabyo::stringHelpers::splitString(hand, ' ');
        const std::vector<std::string> expectedResult = {"TD", "9S", "QS", "QH", "TH"};
        assert(expectedResult == handCards);
        std::cout << "Split String Tests Succeeded.\n\n";
    }

    inline void runStringHelperTests(){
        splitStringTests();
    }

}