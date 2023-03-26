#include "String.h"
#include <cstring>
#include <iostream>
using namespace std;

String::String()
{
	_size = 0;
	_string = nullptr;
}

String::~String()
{
	if (_string != nullptr)
	{
		delete[] _string;
		_string = nullptr;
		_size = 0;
	}
}

String::String(const char* string)
{
	if (string != nullptr)
	{
		_size = strlen(string);
		_string = new char[_size+1];
		strcpy(_string, string);
	}
}

String::String(const String& string)
{
	_size = string._size;
	
	if (_size != 0)
	{
		_string = new char[_size+1];
		strcpy(_string, string._string);
	}
}

String& String::operator=(const String& string)
{
	if (_string != nullptr)
	{
		delete[] _string;
		_string = nullptr;
	}

	_size = string._size;
	
	if(_size == 0)
		return  *this;

	_string = new char[_size + 1];
	strcpy(_string, string._string);
	return *this;
}
ostream& operator << (ostream& out, const String& string)
{	
	if(string._string != nullptr)
		out << string._string;

	return out;
}
istream& operator >> (istream& in, String& string)
{
	char str[4000];
	in >> str;

	if (string._string != nullptr)
		delete[] string._string;

	string._string=new char[sizeof(str)];
	strcpy(string._string, str);
	string._size = sizeof(str);

	return in;
}

void String::addChar(char element)
{
	char* string = nullptr;
	string = new char[_size + 2];
	strcpy(string, _string);
	string[_size] = element;
	string[_size + 1] = '\0';
	_size += 2;

	delete[] _string;
	_string = string;
	
}

bool String::search(const String& string)
{
	if (strstr(_string, string._string) != 0)
		return true;

	return false;
}

void String::addString(const String& string)
{
	char* new_string = nullptr;
	new_string = new char[_size + string._size + 1];

	strcpy(new_string, _string);

	new_string = strcat(new_string, string._string);

	delete[] _string;

	_string = new_string;
	_size = strlen(_string);
}


