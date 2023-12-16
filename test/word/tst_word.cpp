#include <word.h>

#include <string>
#include <utility>

#include <gtest/gtest.h>

const std::pair<std::string,std::string> initiazer_to_string[] {
	{"0", "00000000000000000000000000000000"},
	{"1", "00000000000000000000000000000001"}
};
class WordTest : public testing::TestWithParam<std::pair<std::string,std::string>> {

};

TEST_P(WordTest, StoreInitializedValue) {
	auto params{GetParam()};
	Word word{params.first};
	EXPECT_EQ(word.to_string(), params.second);
}

INSTANTIATE_TEST_SUITE_P(InitializerToString, WordTest, testing::ValuesIn(initiazer_to_string));

TEST_F(WordTest, Addition) {
	Word word1{"1"}, word2{"10"};
	word1 + word2;
}
