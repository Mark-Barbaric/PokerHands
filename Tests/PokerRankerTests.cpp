#include <cassert>
#include "../Lib/PokerHandRanker.h"

namespace grabyo::pokerHandTests{

    inline void pokerHandTypeTests(){
        std::cout << "Starting Poker Hand Type Tests.\n";

        PokerHandRanker highCard {"10H 2H 3D 7S AH"};
        assert(highCard.getHandType() == pokerHandData::PokerHandType::HighCard);
        std::cout << "High Card Type Test Succeeded.\n";

        PokerHandRanker pair {"AH AS 3D 7S QH"};
        assert(pair.getHandType() == pokerHandData::PokerHandType::OnePair);
        std::cout << "Pair Card Type Test Succeeded.\n";

        PokerHandRanker twoPair {"10H 10S 3D 3S AH"};
        assert(twoPair.getHandType() == pokerHandData::PokerHandType::TwoPair);
        std::cout << "Two Pair Card Type Test Succeeded.\n";

        PokerHandRanker trips {"10H 10S 10D 3S AH"};
        assert(trips.getHandType() == pokerHandData::PokerHandType::ThreeOfAKind);
        std::cout << "Trips Card Type Test Succeeded.\n";

        PokerHandRanker fullHouse {"10H 10S 10D 3S 3H"};
        assert(fullHouse.getHandType() == pokerHandData::PokerHandType::FullHouse);
        std::cout << "FullHouse Card Type Test Succeeded.\n";

        PokerHandRanker ranker5 {"QH QS QD QC AH"};
        assert(ranker5.getHandType() == pokerHandData::PokerHandType::FourOfaKind);
        std::cout << "Quads Card Type Test Succeeded.\n";

        PokerHandRanker straight {"3H 4D 5D 6S 7D"};
        assert(straight.getHandType() == pokerHandData::PokerHandType::Straight);
        std::cout << "Straight Card Type Test Succeeded.\n";

        PokerHandRanker flush {"QH 2H 8H JH AH"};
        assert(flush.getHandType() == pokerHandData::PokerHandType::Flush);
        std::cout << "Flush Card Type Test Succeeded.\n";

        PokerHandRanker straightFlush {"3H 4H 5H 6H 7H"};
        assert(straightFlush.getHandType() == pokerHandData::PokerHandType::StraightFlush);
        std::cout << "Straigh Flush Card Type Test Succeeded.\n";

        PokerHandRanker royalFlush {"10D JD QD KD AD"};
        assert(royalFlush.getHandType() == pokerHandData::PokerHandType::RoyalFlush);
        std::cout << "Royal Flush Card Type Test Succeeded.\n";
    }

    inline void runPokerHandTests(){
        pokerHandTypeTests();
    }
}