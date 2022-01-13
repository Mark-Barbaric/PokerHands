#include <cassert>
#include <iostream>
#include "../Lib/PokerHand.h"

namespace grabyo::pokerHandRankTests{

    inline void pokerHandRankingTests(){
        std::cout << "Starting Poker Hand Rank Tests.\n\n";

        PokerHand highCard {"TH 2H 3D 7S AH"};
        assert(highCard.getHandRank() == pokerDefs::HandRank::HighCard);
        std::cout << "High Card Rank Test Succeeded.\n";

        PokerHand pair {"AH AS 3D 7S QH"};
        assert(pair.getHandRank() == pokerDefs::HandRank::OnePair);
        std::cout << "Pair Card Rank Test Succeeded.\n";

        PokerHand twoPair {"TH TS 3D 3S AH"};
        assert(twoPair.getHandRank() == pokerDefs::HandRank::TwoPair);
        std::cout << "Two Pair Card Rank Test Succeeded.\n";

        PokerHand trips {"TH TS TD 3S AH"};
        assert(trips.getHandRank() == pokerDefs::HandRank::ThreeOfAKind);
        std::cout << "Trips Card Rank Test Succeeded.\n";

        PokerHand fullHouse {"TH TS TD 3S 3H"};
        assert(fullHouse.getHandRank() == pokerDefs::HandRank::FullHouse);
        std::cout << "FullHouse Card Rank Test Succeeded.\n";

        PokerHand ranker5 {"QH QS QD QC AH"};
        assert(ranker5.getHandRank() == pokerDefs::HandRank::FourOfaKind);
        std::cout << "Quads Card Rank Test Succeeded.\n";

        PokerHand straight {"3H 4D 5D 6S 7D"};
        assert(straight.getHandRank() == pokerDefs::HandRank::Straight);
        std::cout << "Straight Card Rank Test Succeeded.\n";

        PokerHand flush {"QH 2H 8H JH AH"};
        assert(flush.getHandRank() == pokerDefs::HandRank::Flush);
        std::cout << "Flush Card Type Rank Succeeded.\n";

        PokerHand straightFlush {"3H 4H 5H 6H 7H"};
        assert(straightFlush.getHandRank() == pokerDefs::HandRank::StraightFlush);
        std::cout << "Straigh Flush Card Rank Test Succeeded.\n";

        PokerHand royalFlush {"TD JD QD KD AD"};
        assert(royalFlush.getHandRank() == pokerDefs::HandRank::RoyalFlush);
        std::cout << "Royal Flush Card Rank Test Succeeded.\n";
        std::cout << "Poker Hand Rank Tests Succeeded.\n\n";
    }

    inline void runPokerHandRankTests(){
        pokerHandRankingTests();
    }
}