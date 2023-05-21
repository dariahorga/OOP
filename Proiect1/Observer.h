#pragma once
#include <iostream>
#include <string>
using namespace std;

class Observer
{
public:
	 ~Observer();
	virtual void update(const string& message) = 0;
};

