#pragma once

#include <string>
#include <bitset>

class Word {
public:
	Word(const std::string&);

	std::string const to_string();
	Word operator+(Word const& obj);
private:
	std::bitset<32> m_bits;
};
