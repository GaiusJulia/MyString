#include <iostream>
#include "string.h"


int main(int argc, char** argv)
{	
	char* str = new char[4];
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';
	String str2(str);
	for (int i = 0; i < str2.size + 1; i++)
		std::cout << str2.str[i] << " ";
	std::cout << std::endl;

	str2.append(str2);
	for (int i = 0; i < str2.size + 1; i++)
		std::cout << str2.str[i] << " ";
	std::cout << std::endl;

	String str3(3, 't');
	for (int i = 0; i < str3.size + 1; i++)
		std::cout << str3.str[i] << " ";
	std::cout << std::endl;

	str3.append(str2);
	for (int i = 0; i < str3.size + 1; i++)
		std::cout << str3.str[i] << " ";
	std::cout << std::endl;

	String str4 = str3;
	for (int i = 0; i < str4.size + 1; i++)
		std::cout << str4.str[i] << " ";
	std::cout << std::endl;

	str4 = str2;
	for (int i = 0; i < str4.size + 1; i++)
		std::cout << str4.str[i] << " ";
	std::cout << std::endl;

	return 0;
}
