#include <iostream>


using namespace std;

class prime
{
    int n; // by default private

    int is_prime(int x)
    {
        if (x == 2 || x == 3)
            return 1;
        else
        {
            int half = x / 2;
            for (int j = 2; j <= half; j++) //i<=x/2 because x is not divisible by any integer greater than x/2
                if (x % j == 0)
                    return 0; // if this condition is true then no. is not prime

            return 1; // if above loop run for all values of i then no. is prime
        }
    }

public:
    void input()
    {
        cout << "ENTER UPTO WHICH YOU WANT PRIME SERIES:";
        cin >> n; // n is a data member so can be accessed with name itself
    }

    void display(); // definition is done outside
};

int main()
{
    prime p; // p is an object of class prime

    p.input(); // input() fn define in class prime is called

    p.display(); //display prime series

    cout << "\n\n";
  system("pause");
    return 0;
}

void prime::display()
{
    if (n > 1)
        for (int i = 2; i <= n; i++)
        {
            if (is_prime(i))
            {
                cout << i << "\t";
            }
        }
    else
        cout << "\n\nPLEASE ENTER INTEGER GREATER THAN 1";
}