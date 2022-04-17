
#include <iostream>
using namespace std;

class series
{
    int *ptr;

public:
    series();
    ~series();
    int n;
    void initialise();
    void display_even();
    void display_odd();
};

series::series() //constructor
{
    ptr = nullptr; //point to no memory
    cout << "Enter no. of element you will enter";
    cin >> n;

    if (n > 0)
    {
        ptr = new int[n];
    }
    else
        cout << "enter greater than 0";
}

series::~series() //destructor
{
    delete[] ptr;
    ptr = nullptr;
}

void series::initialise()
{
    cout << "\n\n Enter elements\n\n";

    for (int i = 0; i < n; i++)
    {
        cout << "element[" << i << "] :";
        cin >> ptr[i];
    }
}

void series::display_even()
{
    cout << "\n\n even terms are:\n\n";
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] % 2 == 0)
            cout << ptr[i] << "\t";
    }
}
void series::display_odd()
{
    cout << "\n\n odd terms are:\n\n";
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] % 2 != 0)
            cout << ptr[i] << "\t";
    }
}
int main()
{
    series s;

    if (s.n > 0)
    {
        s.initialise();
        s.display_even();
        s.display_odd();
    }

    return 0;
}
