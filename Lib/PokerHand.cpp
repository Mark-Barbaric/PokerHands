#include "PokerHand.h"

grabyo::PokerHand::PokerHand(std::string_view hand) :m_hand(hand)
{

}

grabyo::PokerHand::Comparison grabyo::PokerHand::compareWith(const PokerHand& opponent) {

	// Your code here ...
	return Comparison::Tie;
}
