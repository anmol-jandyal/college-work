#include <iostream>
using namespace std;

class student
{
    string name, college;
    int sem, batch;

public:
    void input()
    {
        cout << "enter name:";
        getline(cin, name);

        cout << "enter college name:";
        getline(cin, college);

        cout << "enter sem:";
        cin >> sem;

        cout << "enter batch:";
        cin >> batch;
    }
    void display()
    {

        cout << "\n\ndetails of student:";
        cout << "enter name:" << name;

        cout << "\nenter college name:" << college;

        cout << "\nenter sem:" << sem;

        cout << "\nenter batch:" << batch;
    }
};

int main()
{
    student s1;
    s1.input();
    s1.display();
    return 0;
}