/*Q. Create a class for an electricity board that charges the following rates to
users
a) For first 100 units : 40p per unit
b) For next 200 units : 50p per unit
c) Beyond 300 units   : 60p per unit
All users are charged a minimum of Rs.100. If the total cost is more than
Rs.250.00 then an additional charges of 15% are added.
Write a C++ program using class to read the names of users &number of
units consumed &print out the charges with names.*/

#include <string>
#include <iostream>

using namespace std;

class electric
{
    string name;
    float units;

public:
    electric() //default constructor
    {
        units = 0;
        cout << "enter name: ";
        cin >> name;
        cout << "enter no. of units consumed: ";
        cin >> units;
    }
    void display();
};
void electric::display()
{
    float charges = 100;
    float temp_unit = units;

    if (units <= 100)
    {
        charges += temp_unit * 0.4;
    }
    else if (units > 100 && units <= 300)
    {
        charges += 100 * 0.4;
        temp_unit -= 100; // for 150 units 100 units charged by 0.4 and next 50 by 0.5
        charges += temp_unit * 0.5;
    }
    else
    {
        charges += 100 * 0.4 + 200 * 0.5;
        temp_unit -= 300;
        charges += temp_unit * 0.6;
    }

    if (charges > 250)
    {
        charges += (15 * charges) / 100;

        cout << "\n\n\n:::::::::::::::::electric bill:::::::::::::::::\n\n";
        cout << "\nname               :  " << name;
        cout << "\n\nunits consumed   :  " << units;
        cout << "\n\ncharges with 15% :  Rs " << charges;
    }
    else
    {
        cout << "\n\n\n:::::::::::::::::electric bill:::::::::::::::::\n\n";
        cout << "\nname               :  " << name;
        cout << "\n\nunits consumed   :  " << units;
        cout << "\n\ncharges          :  Rs " << charges;
    }
}

int main()
{
    electric user;
    user.display();

    cout << "\n\n\n";
    system("pause");
    return 0;
}