/*Q. Write a C++ program to define a class employee having members Emp-id,
Emp-name, basic salary and functions accept() and display(). Calculate
DA=25% of basic salary, HRA=800, I-tax=15% of basic salary. Display the
payslip using appropriate output format.*/

#include <string>
#include <iostream>

using namespace std;

class employ
{
    int emp_id;
    float b_salary;
    string name;

public:
    employ()
    {
        cout << "ENTER EMPLOY INFORMATION\n\n";
        cout << "name:";
        cin >> name;
        cout << "ID:";
        cin >> emp_id;
        cout << "basic salary:";
        cin >> b_salary;
    }

    void display();
};

void employ::display()
{
    int hra = 800;
    float da = (25 * b_salary) / 100, itax = (15 * b_salary) / 100;
    float net = da + b_salary + hra - itax;

    cout << "::::::::::::::PAY SLIP::::::::::::\n\n";
    cout << "\n\nEMPLOY ID     :  " << emp_id;
    cout << "\n\nEMPLOY NAME   :  " << name;
    cout << "\n\nBASIC SALARY  :  " << b_salary;
    cout << "\n\nHRA           :  " << hra;
    cout << "\n\nINCOME TAX    :  " << itax;
    cout << "\n\nDA            :  " << da;
    cout << "\n\nNET SALARY    :  " << net;
}

int main()
{
    employ e;

    e.display();

    return 0;
}