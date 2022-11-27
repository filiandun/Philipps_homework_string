#include "string.h"

short int String::object_counter = 0;

// ����������� - 80
String::String()
{
	this->string_length = 80;
	this->string = new char[this->string_length];

	++object_counter;
}

// ����������� - ������������ �����
String::String(long long int string_length)
{
	this->string_length = string_length;
	this->string = new char[string_length];

	++object_counter;
}

// ����������� - ������ ������������
String::String(char* user_string)
{
	long long int string_length = 0;

	do
	{
		++string_length;
	} while (user_string[string_length] != '\0');

	this->string_length = string_length;


	this->string = new char[this->string_length];

	for (int i = 0; i < this->string_length; i++)
	{
		this->string[i] = user_string[i];
	}

	++object_counter;
}

// ����������
String::~String()
{
	delete[] this->string;
}


void String::set_string(char* user_string)
{
	for (int i = 0; i < string_length; i++)
	{
		this->string[i] = user_string[i];
	}
}


void String::display_string() const
{
	std::cout << "������: ";
	for (int i = 0; i < this->string_length; ++i)
	{
		std::cout << this->string[i];
	}
}








