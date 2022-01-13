//
// Created by Mark Barbaric on 12/01/2022.
//

#ifndef POKERHANDDATA_H
#define POKERHANDDATA_H

#include <map>

namespace grabyo::pokerDefs{

    inline int faceToValue(char c){
        if(c<='9') {
            return c-'0';
        }
        switch(c){
            case 'T':
                return 10;
            case 'J':
                return 11;
            case 'Q':
                return 12;
            case 'K':
                return 13;
            case 'A':
                return 14;
            default:
                return 0;
        }
    }

    enum class HandRank : char {
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

}


#endif //POKERHAND_POKERHANDDATA_H
