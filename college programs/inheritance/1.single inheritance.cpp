/* C++ program to demonstrate an Example of Single Inheritance */

#include <iostream>
using namespace std;

class B //base
{
    int a;

public:
    int b;
    void get_ab();
    int get_a();
    void show_a();
};

class D : public B //derived
{
    int c;

public:
    void mul();
    void display();
};

void B::get_ab() //outside definition
{
    cout << "\nenter values of a and b:";
    cin >> a >> b;
}

int B::get_a()
{
    return a;
}

void B::show_a()
{
    cout << "\n a = " << a << endl;
}

void D::mul()
{
    get_ab();
    c = b * get_a();
}

void D::display()
{
    show_a();
    cout << "\n b = " << b << endl;
    cout << "\n c = " << c << endl;
}

int main()
{
    D d;
    d.mul();
    d.display();
    d.mul();
    d.display();
    return 0;
}
