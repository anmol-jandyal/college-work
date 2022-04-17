#include <iostream>

using namespace std;

class fibonacci
{
    int n; // for no. of terms

public:
    void input()
    {
        cout << "enter no. of terms you want";
        cin >> n;
    }

    void display()
    {
        if (n > 0)
        {
            unsigned long long int pre1 = 0, pre2 = 1, next = 0;
            int i;

            if (n >= 1)
                cout << pre1 << "\n";
            if (n >= 2)
                cout << pre2;

            for (i = 1; i <= n - 2; i++)
            {
                next = pre1 + pre2; //next term is sum of previous two terms

                cout << "\n"
                     << next;

                pre1 = pre2;
                pre2 = next;
            }
        }
        else
            cout << "\n\nplease enter no. greater than 0";
    }
};

int main()
{
    fibonacci f; // object

    f.input();
    f.display();

    cout << "\n\n";
    system("pause"); //to pause the terminal from exiting
    return 0;
}