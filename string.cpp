#include "string.h"

String::String(const char* str) 
{
    size = strlen(str);
    this->str = new char[size + 1];
    strcpy(this->str, str);
}

String::String(size_t n, char c) 
{
    size = n;
    str = new char[n + 1];
    for (int i = 0; i < size; i++)
        str[i] = c;
    str[n] = '\0';
}

String::String(const String& other)
{
    size = other.size;
    str = new char[size + 1];
    strcpy(str, other.str);
}

String::~String() 
{
    delete[] str;
}

void String::append(String& other)
{
    size_t new_size = size + other.size;
    char* new_str = new char[new_size + 1];
    for (int i = 0; i < size; i++)
        new_str[i] = str[i];
    for (int i = size; i < new_size; i++)
        new_str[i] = other.str[i - size];
    new_str[new_size] = '\0';
    delete[] str;
    str = new_str;
    size = new_size;
}

String& String::operator=(const String& other)
{
    if (this != &other) 
    {
        delete[] str;
        size = other.size;
        str = new char[size + 1];
        strcpy(str, other.str);
    }
    return *this;
}
