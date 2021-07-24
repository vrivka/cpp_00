#ifndef TEST_SAMPLECLASS_HPP
#define TEST_SAMPLECLASS_HPP

#include <iostream>
#include <iomanip>

class Test {
public:
	int i;

	Test();
	~Test();
};

class Sample {
public:
	Test a[5];

	void settest(int);
	Sample();
	~Sample();
};


#endif
