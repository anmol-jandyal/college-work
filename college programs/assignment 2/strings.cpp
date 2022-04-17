#include <iostream>
using namespace std;

void print(const char *s)
{
    cout << s;
}
int main()
{
    const char *s = {"hello"};
    print(s);
    s[2] = '0';
    int i = 11;
    const int *ptr = &i;
    cout << *ptr;
    i = 111;
    cout << *ptr;
}