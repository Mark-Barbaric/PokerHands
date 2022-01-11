# Grabyo Technical Test

At Grabyo we love board games and will have an occasional poker night.
Since no one remembers the card ranking you will have to write a program that
compare poker hands and determines a winner.

## 1. Requirements

A poker hand has a constructor that accepts a `std::string_view` containing 
exactly 5 cards, for example: 

```cpp
PokerHand hand{ "KS 2H 5C JD TD" };
```

Further, a poker hand has a member function to compare itself to another hand:

```cpp
PokerHand::Comparison PokerHand::compareWith(const PokerHand& opponent);
```

The characteristics of the string of cards are:

  * A space is used as card seperator
  * Each card consists of two characters
  * The first character is the value of the card, valid characters are: `2`,
    `3`, `4`, `5`, `6`, `7`, `8`, `9`, `T`(en), `J`(ack), `Q`(ueen), `K`(ing),
    `A`(ce)
  * The second character represents the suit, valid characters are: `S`(pades),
    `H`(earts), `D`(iamonds), `C`(lubs)

The result of your poker hand compare can be one of the 3 options:

  * `PokerHand::Comparison::Tie`
  * `PokerHand::Comparison::Win`
  * `PokerHand::Comparison::Loss`

The ranking of the hands should follow the [Texas Hold'em rules](https://en.wikipedia.org/wiki/List_of_poker_hands).

You are free to architect your code the way you want:  adding classes, enums or
const(expr)s as long as you stick to the `compareWith` method signature and
`PokerHand` specification given in the sample.  You can use any libraries that
you feel are relevant to solve this problem.  Your solution should compile with
`g++` or `clang++` using the C++17 standard.

## 2. Tests

A sample unit test has been included in the code skeleton. Writing more tests is
welcome :)

You can run the sample tests by compiling the application using
`g++ -std=c++20 -o poker PokerHand.cpp PokerHand_UnitTest.cpp` and running the
`poker` binary.  If you add additional dependencies outside of the C++20
standard library, please provide updated compilation instructions.

Good luck ;)
