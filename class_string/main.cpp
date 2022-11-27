#include <iostream>
#include "string.h"

int main()
{
	setlocale(LC_ALL, "rus");

// КОНСТРУКТОР - 80
	String* string_1 = new String();

	
// КОНСТРУКТОР - ПРОИЗВОЛЬНАЯ ДЛИНА
	String* string_2 = new String(200);


// КОНСТРУКТОР - СТРОКА ПОЛЬЗОВАТЕЛЯ
	char* user_string = new char[5] { 'C', 'H', 'A', 'R', '\0' };
	String* string_3 = new String(user_string);

	string_3->display_string();

	std::cout << std::endl << "Кол-во созданных объектов: " << string_3->object_counter;

	return 0;
}
