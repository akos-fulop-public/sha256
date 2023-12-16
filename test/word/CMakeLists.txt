add_executable(tests tst_word.cpp)
target_link_libraries(tests
	PRIVATE GTest::GTest
	PRIVATE GTest::Main
	PRIVATE word)
gtest_discover_tests(tests)

