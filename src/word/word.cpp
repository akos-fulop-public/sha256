#include "word.h"

Word::Word(const std::string &initializer) :
	m_bits(initializer)
{}

std::string const Word::to_string() {
	return m_bits.to_string();
}
