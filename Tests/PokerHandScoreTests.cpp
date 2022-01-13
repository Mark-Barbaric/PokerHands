#include <cassert>
#include <iostream>
#include "../Lib/PokerHand.h"

namespace grabyo::pokerHandScoreTests{

    inline void pokerHandScoreTests() {
        std::cout << "Running Poker Hand Score Tests. \n\n";
        grabyo::PokerHand pair{"TD TS AC KH QS"};
        assert(pair.getHandScore() == 2039);
        grabyo::PokerHand pair2{"TD TC AC KH JS"};
        assert(pair2.getHandScore() == 2038);
        std::cout << "Pair Score Tests Pass. \n";
        grabyo::PokerHand twoPair{"TD TS AC AH QS"};
        assert(twoPair.getHandScore() == 4812);
        grabyo::PokerHand twoPair2{"TD TC AC AH JS"};
        assert(twoPair2.getHandScore() == 4811);
        std::cout << "Pair Score Tests Pass. \n";
        grabyo::PokerHand trip{"TD TC TC 2H 3S"};
        assert(trip.getHandScore() == 30005);
        std::cout << "Trip Score Tests Pass. \n";
        grabyo::PokerHand fullHouse{"TD TS TC QH QS"};
        assert(fullHouse.getHandScore() == 32400);
        grabyo::PokerHand fullHouse2{"JD JS JC KH KS"};
        assert(fullHouse2.getHandScore() == 35600);
        std::cout << "Full House Score Tests Pass. \n";
        grabyo::PokerHand quad{"TD TS TC TH QS"};
        assert(quad.getHandScore() == 400012);
        std::cout << "Quad Score Tests Pass. \n";
        grabyo::PokerHand straight{"9D TD JC QD KD"};
        assert(straight.getHandScore() == 1300000);
        std::cout << "Straight Score Tests Pass. \n";
        grabyo::PokerHand flush{"4D TD JD QD KD"};
        assert(flush.getHandScore() == 1300000);
        grabyo::PokerHand straightFlush{"9D TD JD QD KD"};
        assert(straightFlush.getHandScore() == 1300000);
        grabyo::PokerHand royalFlush{"TD JD QD KD AD"};
        assert(royalFlush.getHandScore() == 1400000);
        std::cout << "Run Score Tests Pass. \n";
        std::cout << "Poker Hand Score Tests Succeeded. \n\n";
    }

    inline void runPokerHandScoreTests(){
        pokerHandScoreTests();
    }

}