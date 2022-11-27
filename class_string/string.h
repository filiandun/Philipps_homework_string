#pragma once
#include <iostream>

class String
{
public:
	static short int object_counter; 

	String(); // конструктор -  80
	String(long long int string_length); // конструктор - произвольная длина
	String(char* user_string); // конструктор - строка пользователя

	~String(); // деструктор

private:
	char* string = nullptr;
	long long int string_length = 0;

public:
	void set_string(char* user_string);
	void display_string() const;

};

