//
// Created by Mark Barbaric on 12/01/2022.
//

#ifndef POKERHANDDATA_H
#define POKERHANDDATA_H

namespace grabyo::pokerHandData{

    const std::map<std::string, int> cardValues {
            {"2", 2}, {"3", 3}, {"4", 4}, {"5", 5}, {"6", 6}, {"7", 7},
            {"8", 8}, {"9", 9}, {"10", 10}, {"J", 11}, {"Q", 12}, {"K", 13}, {"A", 14}
    };

    enum class PokerHandType : char {
        Unclassified = 0,
        HighCard = 1,
        OnePair = 2,
        TwoPair = 3,
        ThreeOfAKind = 4,
        Straight = 5,
        Flush = 6,
        FullHouse = 7,
        FourOfaKind = 8,
        StraightFlush = 9,
        RoyalFlush = 10
    };

    const std::map<PokerHandType, int> pokerHandValues{

    };

}


#endif //POKERHAND_POKERHANDDATA_H
