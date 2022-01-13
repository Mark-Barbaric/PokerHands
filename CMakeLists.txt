cmake_minimum_required (VERSION 3.16)
project(PokerHand)
set(CMAKE_CXX_STANDARD 20)

add_executable(PokerTestRunner Tests/PokerHandComparisonTests.cpp Tests/PokerHandScoreTests.cpp Tests/PokerHandRankTests.cpp Tests/StringHelperTests.cpp PokerHandTestRunner.cpp)
add_library(PokerLib STATIC Lib/PokerDefs.h Lib/StringHelpers.h Lib/PokerHand.cpp Lib/PokerHand.h)
target_link_libraries(PokerTestRunner PokerLib)
