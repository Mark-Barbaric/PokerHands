cmake_minimum_required (VERSION 3.16)
project(PokerHand)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PokerTestRunner Tests/PokerHandComparisonTests.cpp Tests/PokerHandScoreTests.cpp Tests/PokerHandRankTests.cpp PokerHandTestRunner.cpp)
add_library(PokerLib STATIC Lib/PokerHand.cpp Lib/PokerHand.h)
target_link_libraries(PokerTestRunner PokerLib)
