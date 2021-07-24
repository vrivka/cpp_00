#include <sstream>
#include "SampleClass.hpp"

static void printData(std::string const &str) {
	if (str.size() > 10)
		std::cout << str.substr(0, 9) <<  ".";
	else
		std::cout << std::setw(10) << str;
}

static void printID(size_t id) {
	std::ostringstream oss;
	oss << id;
	std::string str = oss.str();
	printData(str);
}

int main()
{
	size_t id;

	std::cin >> id;
	printID(id);
	std::cout << '\n' << id << std::endl;
	return 0;
}