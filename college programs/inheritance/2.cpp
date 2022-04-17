#include <iostream>
using namespace std;

class A
{
    int a;

public:
    int b;
    void read()
    {
        cout << "A class\n";
        cin >> a >> b;
    }
    void display()
    {
        cout << "a" << a << " b" << b;
    }
};

class B : public A
{
    int c;

public:
    int d;
    void read()
    {
        cout << "B class\n";
        cin >> c >> d;
    }
    void Displ()
    {
        cout << "bclass a =" << b;
        display();
        cout << "\n c" << c << " d" << d;
    }
};

int main()
{
    B ob;
    ob.read();
}