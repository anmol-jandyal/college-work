#include <iostream>
#define size 50

using namespace std;

class array
{
    int n;
    int a[size];

    void swap(int &x, int &y) //call by reference is used
    {
        int temp = x;
        x = y;
        y = temp;
    }

public:
    void input()
    {
        cout << "\n\nenter no. of element you want in an array";
        cin >> n;

        cout << "\n\nenter elements\n";

        for (int i = 0; i < n; i++)
        {
            cout << "arr[" << i << "]:";
            cin >> a[i];
        }
    }

    void display()
    {
        cout << "\n\n ARRAY ELEMENTS ARE:\n\n";

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << "\t";
        }
    }

    void sortasc()
    {
        int i;
        int jnocomp = n - 1;

        for (int j = 0; j < jnocomp; j++)
        {
            int inocomp = n - 1 - j;

            for (i = 0; i < inocomp; i++)
                if (a[i] > a[i + 1])
                {
                    swap(a[i], a[i + 1]);
                }
        }
    }

    void sortdes()
    {
        int i;
        int jnocomp = n - 1;

        for (int j = 0; j < jnocomp; j++)
        {
            int inocomp = n - 1 - j;

            for (i = 0; i < inocomp; i++)
                if (a[i] < a[i + 1])
                {
                    swap(a[i], a[i + 1]);
                }
        }
    }
};

int main()
{
    array a;
    a.input();

    cout << "\n\n";
    system("pause");

    //displaying array
    cout << "\n\narray before sorting";
    a.display();

    cout << "\n\n\n";
    system("pause");

    //sorting ascending and displaying
    a.sortasc(); //sort array in ascending
    cout << "\n\n after sorting in ascending order:";
    a.display();

    cout << "\n\n\n";
    system("pause");

    //sorting in descending and displaying
    a.sortdes(); //sort array in descending
    cout << "\n\n after sorting in descending order:";
    a.display();

    cout << "\n\n\n";
    system("pause");

    return 0;
}
