#include <iostream>
using namespace std;

class sample
{
    static int count; // can be used also by sample

public:
    sample()
    {
        count++;
    }
    static void display()
    {
        cout << "\n\ntotal no. of object(var) created is " << count;
    }
};
int sample::count = 0;

int main()
{
    sample s1, s2, s3, s4, s5;
    s1.a.fun();
    sample::display();
    return 0;
}