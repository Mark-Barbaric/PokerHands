#include <cassert>
#include <iostream>
#include "../Lib/PokerHand.h"

namespace grabyo::pokerHandRankTests{

    inline void pokerHandRankingTests(){
        std::cout << "Starting Poker Hand Rank Tests.\n\n";

        PokerHand highCard {"TH JD 9C 7S AH"};
        assert(highCard.getHandRank() == PokerHand::PokerHand::HandRank::HighCard);
        std::cout << "High Card Rank Test Succeeded.\n";

        PokerHand pair {"2H 2S 3D 5S 6H"};
        assert(pair.getHandRank() == PokerHand::HandRank::OnePair);
        std::cout << "Pair Card Rank Test Succeeded.\n";

        PokerHand twoPair {"TH TS 3D 3S AH"};
        assert(twoPair.getHandRank() == PokerHand::HandRank::TwoPair);
        std::cout << "Two Pair Card Rank Test Succeeded.\n";

        PokerHand trips {"TH TS TD 3S AH"};
        assert(trips.getHandRank() == PokerHand::HandRank::ThreeOfAKind);
        std::cout << "Trips Card Rank Test Succeeded.\n";

        PokerHand fullHouse {"TH TS TD 3S 3H"};
        assert(fullHouse.getHandRank() == PokerHand::HandRank::FullHouse);
        std::cout << "FullHouse Card Rank Test Succeeded.\n";

        PokerHand quads {"QH QS QD QC AH"};
        assert(quads.getHandRank() == PokerHand::HandRank::FourOfaKind);
        std::cout << "Quads Card Rank Test Succeeded.\n";

        PokerHand straight {"3H 4D 5D 6S 7D"};
        assert(straight.getHandRank() == PokerHand::HandRank::Straight);
        std::cout << "Straight Card Rank Test Succeeded.\n";

        PokerHand flush {"QH 2H 8H JH AH"};
        assert(flush.getHandRank() == PokerHand::HandRank::Flush);
        std::cout << "Flush Card Type Rank Succeeded.\n";

        PokerHand straightFlush {"9H TH JH QH KH"};
        assert(straightFlush.getHandRank() == PokerHand::HandRank::StraightFlush);
        std::cout << "Straigh Flush Card Rank Test Succeeded.\n";

        PokerHand royalFlush {"TD JD QD KD AD"};
        assert(royalFlush.getHandRank() == PokerHand::HandRank::RoyalFlush);
        std::cout << "Royal Flush Card Rank Test Succeeded.\n";
        std::cout << "Poker Hand Rank Tests Succeeded.\n\n";
    }

    inline void runPokerHandRankTests(){
        pokerHandRankingTests();
    }
}