#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f1;
    f1.open("file1.txt", ios::in);
    if (!f1.is_open())
    {
        cout << "file not found";
        exit(0);
    }

    ofstream f2("file2.txt", ios::out);
    if (!f2.is_open())
    {
        exit(0);
    }

    char ch;
    while (!f1.eof())
    {
        f1.get(ch);
        f2 << ch;
    }

    f2.close();
    f1.close();
}