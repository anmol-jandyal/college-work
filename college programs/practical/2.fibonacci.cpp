#include <iostream>
using namespace std;
#define llu long long unsigned int
class fibonacci
{
    int n; // no. of terms of fibonacci

public:
    fibonacci(int x) : n{x} {}
    void display()
    {
        llu x1 = 0, x2 = 1, next = 0;
        cout << x1 << "  " << x2 << "  ";
        for (int i = 3; i <= n; i++)
        {
            next = x1 + x2;
            cout << next << "  ";
            x1 = x2;
            x2 = next;
        }
    }
};

int main()
{
    int n;
    cout << "enter no. of terms need for fibonacci series:";
    cin >> n;

    fibonacci obj(n);
    obj.display();
    return 0;
}