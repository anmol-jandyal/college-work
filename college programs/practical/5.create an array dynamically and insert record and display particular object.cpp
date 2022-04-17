#include <iostream>
using namespace std;
class st_list;

// for student details
class student
{
    string name, college, roll;
    int sem, batch;

public:
    void input()
    {
        cin.sync(); // clear all content in cin stream (buffer)
        cout << "enter name:";
        getline(cin, name);
        cout << "roll no.";
        getline(cin, roll);
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
        cout << "\nroll no:" << roll;
        cout << "\nenter college name:" << college;

        cout << "\nenter sem:" << sem;

        cout << "\nenter batch:" << batch;
    }
    friend class st_list;
};
class st_list
{
    student *ls;
    int n;

public:
    st_list(int n)
    {
        this->n = n;
        ls = new student[n];
    }
    void insert();
    void dparticular(string);

    ~st_list()
    {
        delete[] ls;
        ls = NULL;
    }
};
void st_list::insert()
{
    cout << "enter detail of";
    for (int i = 0; i < n; i++)
    {
        cout << "\n student " << i + 1 << " :";
        ls[i].input();
    }
}
void st_list::dparticular(string st_r)
{
    for (int i = 0; i < n; i++)
    {
        if (st_r.compare(ls[i].roll) == 0)
        {
            ls[i].display();
            return;
        }
    }
    cout << "\n\n student not present in the list";
}

int main()
{
    int n;
    cout << "enter no. of students";
    cin >> n;

    st_list obj(n);
    obj.insert();

    string st_r;
    cout << "enter roll no. whose detail to be extracted:";
    cin.sync();
    getline(cin, st_r);

    obj.dparticular(st_r);
    return 0;
}