#include <iostream>
using namespace std;
class newdelete
{
    int n;
    int *arr;

public:
    newdelete(int n)
    {
        this->n = n;
        arr = new int[n];
    }
    void input()
    {
        cout << "\nenter elements:\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }
    void display()
    {
        cout << "\n\nthe entered array:\n";
        for (int i = 0; i < n; i++)
            cout << arr[i] << "  ";
    }

    ~newdelete()
    {
        delete[] arr;
        arr = NULL;
    }
};
int main()
{
    int n;
    cout << "enter no. of elements:";
    cin >> n;
    if (n < 1)
    {
        cout << "array element cannot be less than 1";
        exit(0);
    }
    newdelete obj(n);
    obj.input();
    obj.display();
    return 0;
}