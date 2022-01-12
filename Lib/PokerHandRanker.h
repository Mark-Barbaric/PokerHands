
#ifndef POKERHAND_POKERHANDRANKER_H
#define POKERHAND_POKERHANDRANKER_H

#include <string>
#include <string_view>
#include <iostream>
#include <map>
#include "StringHelpers.h"
#include "PokerHandData.h"

namespace grabyo{
    class PokerHandRanker {
    public:

        explicit PokerHandRanker(std::string_view pokerHand);
        [[nodiscard]] pokerHandData::PokerHandType getHandType() const {return m_pokerHandType;}

    private:

        void generateHandData();
        void checkCardCount();
        void classifyAsPairTripOrQuad();
        void classifyAsStraightFlush();
        pokerHandData::PokerHandType m_pokerHandType {pokerHandData::PokerHandType::Unclassified};
        std::string m_pokerHand;
        std::map<std::string, int> m_cardCount;
        std::map<std::string, int> m_suitCount;
        int m_numPairs {0};
        int m_numTrips {0};
        int m_numQuads {0};
        bool containsFlush {false};
        bool containsStraight {false};
        int m_highestCard = {0};
    };
}


#endif //POKERHAND_POKERHANDRANKER_H
