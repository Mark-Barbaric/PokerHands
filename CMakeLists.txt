cmake_minimum_required (VERSION 3.16)
project(PokerHand)
set(CMAKE_CXX_STANDARD 20)

add_executable(PokerTestRunner Tests/PokerRankerTests.cpp Tests/StringHelperTests.cpp PokerHandTestRunner.cpp)
add_library(PokerLib STATIC Lib/PokerHandData.h Lib/StringHelpers.h Lib/PokerHand.cpp Lib/PokerHand.h Lib/PokerHandRanker.cpp Lib/PokerHandRanker.h)
target_link_libraries(PokerTestRunner PokerLib)
