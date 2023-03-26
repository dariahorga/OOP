#pragma once
#include <iostream>
using namespace std;

class String
{
	int _size;
	char* _string;

public:

	String();

	~String();

	String(const char* string);

	String(const String& string);

	String& operator=(const String& string);

	friend ostream& operator << (ostream& out, const String& string);

	friend istream& operator >> (istream& in, String& string);

	void addChar(char element);

	bool search(const String& string);

	void addString(const String& string);

};



