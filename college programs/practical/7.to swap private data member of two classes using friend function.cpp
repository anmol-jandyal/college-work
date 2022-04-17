#include <iostream>
using namespace std;
class first;
class second;
void swap(first &, second &);
class first
{
    int a;

public:
    first(int x) : a{x} {}
    int display() { return a; }

    friend void swap(first &, second &);
};

class second
{
    int b;

public:
    second(int x) : b{x} {}
    int display() { return b; }
    friend void swap(first &, second &);
};

void swap(first &obj1, second &obj2)
{
    obj1.a = obj2.b ^ obj1.a;
    obj2.b = obj2.b ^ obj1.a;
    obj1.a = obj2.b ^ obj1.a;
}

int main()
{
    int n;
    cout << "enter no. to be inserted in object of class first:";
    cin >> n;

    first obj1(n);

    cout << "enter no. to be inserted in object of class second:";
    cin >> n;

    second obj2(n);

    cout << "\nbefore swapping:\n";
    cout << "obj1.a : " << obj1.display() << "    obj2.b : " << obj2.display();

    swap(obj1, obj2);

    cout << "\n\nafter swapping:\n";
    cout << "obj1.a : " << obj1.display() << "    obj2.b : " << obj2.display();

    return 0;
}