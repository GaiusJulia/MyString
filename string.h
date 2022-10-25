#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
    String(const char* str = "");
    String(size_t n, char c);
    String(const String& other);
    ~String();

    void append(String& other);

    String& operator=(const String& other);

    size_t size;
    char* str;
};