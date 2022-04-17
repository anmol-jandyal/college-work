/*
Develop an OOP in C++ to create the payroll of an organization by the following information :
(i) Employee name
(ii) Employee designation
(iii) Account number
(iv) Date of joining
(v) Basic pay
(vi) DA, HRA, CCA, Net Pay
DA is calculated 45% of Basic Pay
HRA is calculated 20% of Basic Pay.
For designing above program use inheritance. Apply appropriate constructors in the
program.
 */

#include <iostream>
using namespace std;

class basicdetail
{
protected:
    char name[25];
    char designation[15], account[12], doj[10];
    float pay; // basic pay

public:
    basicdetail()
    {
        name[0] = '\0';
        designation[0] = '\0';
        account[0] = '\0';
        doj[0] = '\0';
        pay = 0.0;
    }

    void input()
    {
        cout << "\n enter detail of employee";
        cout << "\n\n name :";
        cin.sync();
        cin.getline(name, 25);
        cout << "designation :";
        cin.getline(designation, 15);
        cout << " account no. :";
        cin.getline(account, 12);
        cout << " date of joining :";
        cin.getline(doj, 11);
        cin.sync();
        cout << "enter basic pay";
        cin >> pay;
    }

    void display()
    {
        cout << "\n\n BASIC DETAILS OF EMPLOYEE:\n\n";
        cout << " name           : " << name;
        cout << "\n designation    : " << designation;
        cout << "\n date of joining: " << doj;
        cout << "\n account no.    : " << account;
        cout << "\n basic pay      :  RS " << pay;
    }
};

class payrolldetail : public basicdetail
{
    float hra, da, net_pay;

public:
    payrolldetail()
    {
    }

    void input()
    {
        basicdetail::input();
        hra = 20 * pay / 100;
        da = 45 * pay / 100;
        net_pay = pay + hra + da;
    }
    void display()
    {
        basicdetail::display();
        cout << "\n hra       : RS " << hra;
        cout << "\n da        : RS " << da;
        cout << "\n net pay   : RS " << net_pay;
    }
};

int main()
{
    int n;
    cout << "enter no. of employees :";
    cin >> n;

    payrolldetail *arr = new payrolldetail[n];

    cout << "ENTER DETAILS OF EMPLOYEE: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n\ndetails of employee " << i + 1;
        arr[i].input();
    }

    cout << "\n\nPAYROLL OF COMPANY\n\n\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\n\ndetails of employee " << i + 1;
        arr[i].display();
    }

    return 0;
}
