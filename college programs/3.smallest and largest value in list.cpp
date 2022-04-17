#include <iostream>
#define size 50

using namespace std;

class array
{
    int n;
    int arr[size];

public:
    void input()
    {
        cout << "\n\nenter no. of element you want in an array";
        cin >> n;

        cout << "\n\nenter elements\n";

        for (int i = 0; i < n; i++)
        {
            cout << "arr[" << i << "]:";
            cin >> arr[i];
        }
    }

    int maximum()
    {
        int max = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (max >= arr[i])
            {
            }
            else
                max = arr[i];
        }
        return max;
    }

    int minimum()
    {
        int min = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (min <= arr[i])
            {
            }
            else
                min = arr[i];
        }
        return min;
    }
};

int main()
{
    array a;
    a.input();

    cout << "\n\n minimum value is :" << a.minimum();
    cout << "\n\n maximum value is :" << a.maximum();

    cout << "\n\n";
    system("pause");
    return 0;
}