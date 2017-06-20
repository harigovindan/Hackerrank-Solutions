#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdint>
#include <algorithm>

uint64_t ToInteger(const std::string& s)
{
	std::istringstream istr(s);
	uint64_t v;
	istr >> v;
	return v;
}

std::string ToString(const uint64_t& v)
{
	std::ostringstream ostr;
	ostr << v;
	return ostr.str();
}

bool CanStartFrom(const std::string& s, const std::string& prefix)
{
	if (prefix[0] == '0')
		return false;

	size_t sequenceLength = 1;
	uint64_t v = ToInteger(prefix);
	std::string t = prefix;
	while (t.size() < s.size())
	{
		sequenceLength += 1;
		v += 1;
		t += ToString(v);
	}

	if (s != t)
		return false;

	if (sequenceLength < 2)
		return false;

	return true;
}

bool IsPossible(const std::string& s, uint64_t& startValue)
{
	for (size_t prefixSize = 1; prefixSize <= 16; prefixSize++)
	{
		if (prefixSize > s.size())
			break;

		const std::string prefix = s.substr(0, prefixSize);
		if (CanStartFrom(s, prefix))
		{
			startValue = ToInteger(prefix);
			return true;
		}
	}

	return false;
}

int main()
{
	size_t t;
	std::cin >> t;

	for (size_t ti = 0; ti < t; ti++)
	{
		std::string s;
		std::cin >> s;

		uint64_t startValue;
		if (IsPossible(s, startValue))
		{
			std::cout << "YES " << startValue << std::endl;
		}
		else
		{
			std::cout << "NO" << std::endl;
		}
	}
}
