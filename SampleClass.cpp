#include "SampleClass.hpp"

Sample::Sample() {
	std::cout << "Constructor" << std::endl;
}

Sample::~Sample() {
	std::cout << "Destructor" << std::endl;
}

void Sample::settest(int ind) {
	this->a[ind].i = 5;
}

Test::Test()
{
	i = 0;
	std::cout << "Constructor test" << std::endl;
}

Test::~Test(){
	std::cout << "Destructor test" << std::endl;
}
