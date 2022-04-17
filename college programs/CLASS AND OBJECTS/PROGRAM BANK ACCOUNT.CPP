/*
Q. Define a class to represent a bank account. Include the following members:
Data members:
1) Name of the depositor
2) Account number
3) Type of account
4) Balance amount in the account.
Member functions:
1) To assign initial values
2) To deposit an amount
3) To withdraw an amount after checking the balance
4) To display name and balance.
*/

#include <string>
#include <iostream>

using namespace std;

class bank
{
    string name;
    string acc;
    string type;
    float bal;

public:
    bank() //default constructor
    {
        bal = 0; //for new user balance is 0
        cout << "enter name:";
        cin >> name;
        cout << "enter acc no.:";
        cin >> acc;
        cout << "enter type:";
        cin >> type;
    }

    void deposit();
    void withdraw();
    void display(float);
};

void bank::deposit()
{
    float depo = 0;
    cout << "\n\nenter amt. : ";
    cin >> depo;
    bal = bal + depo;

    cout << "\n\nCURRENT BAL IS : " << bal;
}
void bank::withdraw()
{
    float with;
    cout << "\n\nenter amt to be withdraw : ";
    cin >> with;

    cout << "\n\n" : if (with > bal)
    {
        cout << "\n\n!!!AMT IS NOT PRESENT IN THIS ACC!!!!";
    }
    else
    {
        bal -= with;
        display(with);
    }
}

void bank::display(float with = 0)
{
    cout << "::::::::::::::::WITHDRAW SLIP::::::::::::::::::" << endl;
    cout << "\n\n  NAME         :  " << name;
    cout << "\n\n  TYPE         :  " << type;
    cout << "\n\n  ACCOUNT NO.  :  " << acc;
    cout << "\n\n  Amt withdraw :  " << with;
    cout << "\n\n  CURRENT AMT  :  " << bal;
}

int main()
{
    bank obj;
    char choice = '\0', ext = 'y';

    do
    {
        cout << "\n\n\nENTER \n\n 1:for deposit\n\n 2:for withdraw\n\n 3:acc details\n\n";
        cin >> choice;

        switch (choice)
        {
        case '1':
            obj.deposit();
            break;

        case '2':
            obj.withdraw();
            break;

        case '3':
            obj.display();
            break;

        default:
            cout << "enter from 1 to 3";
            break;
        }
        cout << "\n\n\n\n\n IF AGAIN WANT SOME OPERATION ENTER 'y' else enter any thing";
        cin >> ext;
    } while (ext == 'y' || ext == 'Y');

    cout << "\n\n!!!!!!!!!!!THANK YOU!!!!!!!!!!\n\n\n";
    return 0;
}
