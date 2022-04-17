/*
Write a program a program in C++ to compare two fractional numbers by overloading the
relational operator (==, !=, >=, <=).
*/

#include <iostream>
using namespace std;

class fractional
{
    int den;
    int num;

public:
    fractional(int num = 0, int den = 1)
    {
        this->den = den;
        this->num = num;
    }
    void input();

    bool operator==(const fractional &f1);

    bool operator!=(const fractional &f1);

    bool operator>=(const fractional &f1);

    bool operator<=(const fractional &f1);
};

bool fractional::operator==(const fractional &f1)
{
    if (den == f1.den && num == f1.num)
        return true;

    return false;
}
bool fractional::operator!=(const fractional &f1)
{
    if (den == f1.den && num == f1.num)
        return false;

    return true;
}
bool fractional::operator<=(const fractional &f1)
{
    // we take lcm and multiple the den of one fractional no. to num of other
    int tempnum = num * f1.den, tempnum1 = f1.num * den;

    if (tempnum < tempnum1)
        return true;

    return false;
}
bool fractional::operator>=(const fractional &f1)
{
    // we take lcm and multiple the den of one fractional no. to num of other
    int tempnum = num * f1.den, tempnum1 = f1.num * den;

    if (tempnum < tempnum1)
        return false;

    return true;
}

void fractional::input()
{
    cout << "enter the value of numerator";
    cin >> num;
    cout << "enter the value of denominator";
again_den:
    cin >> den;
    if (den == 0)
    {
        cout << "denominator cannot be 0";
        goto again_den;
    }
}

int main()
{
    fractional f1{0, 0}, f2{0, 0};

    char check = '\0';
    do
    {
        cout << "\n1 for input0";
        cout << "\n2 for checking relation b/w no.s";
        cout << "\n3 for end";
        cin >> check;

        switch (check)
        {
        case '1':
            cout << "enter f1";
            f1.input();
            cout << "enter f2";
            f2.input();
            break;

        case '2':
            if (f1 == f2)
            {
                cout << "f1== f2\n";
            }
            else if (f1 != f2)
            {
                cout << "f1 != f2\n";

                if (f1 >= f2)
                {
                    cout << "\n f1>f2";
                }
                else if (f1 <= f2)
                {
                    cout << "\n f1<f2";
                }
            }
            break;

        case '3':
            break;
        default:
            cout << "\nenter choice correctly\n";
            break;
        }

    } while (check != '3');

    return 0;
}
