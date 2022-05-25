#include <gtest/gtest.h>
#include "IntentAnalyzer.h"


TEST(Intent_test, TestUseCase1) {
  IntentAnalyzer intentAnalyzer;
  std::string intent = intentAnalyzer.processForIntent("What is the weather like today?");
  ASSERT_EQ(intent,"Intent: Get Weather");
}

TEST(Intent_test, TestUsecase2) {
  IntentAnalyzer intentAnalyzer;
  std::string intent = intentAnalyzer.processForIntent("What is the weather like in Paris today?");
  ASSERT_EQ(intent,"Intent: Get Weather City");
}

TEST(Intent_test, TestUsecase3) {
  IntentAnalyzer intentAnalyzer;
  std::string intent = intentAnalyzer.processForIntent("Tell me an interesting fact.");
  ASSERT_EQ(intent,"Intent: Get Fact");
}