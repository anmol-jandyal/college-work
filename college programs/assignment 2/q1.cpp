/*
Define a class String that could work as a user-defined string type. Include constructors that will
enable us to create an uninitialized string String s1; and also to initialize an object with a string
constant at the time of creation like String s2(“Well done”);
Include a function that adds two strings to make a third string.
Write a complete program to test your class to see that it does the following tasks :
(a) Creates uninitialized string objects.
(b) Creates objects with string constants.
(c) Concatenates two strings properly.
(d) Displays a desired string object.
*/

#include <iostream>
using namespace std;

class STRING
{
    char *st;
    int n;

public:
    STRING(int n, const char *s = "\0") // where n is the max no. of char element present in char array
    {
        int i = 0;
        st = new char[n];
        this->n = n;
        for (i = 0; i < (n - 1) && s[i] != '\0'; i++) // last element should contain null char
        {
            st[i] = s[i];
        }
        st[i] = '\0';
    }

    void display()
    {
        for (int i = 0; st[i] != '\0'; i++)
        {
            cout << st[i];
        }
    }

    STRING operator+(const STRING s1)
    {
        STRING s{(n + s1.n)}; // n + s1.n represent total element of two char array
        int i = 0;
        // putting string first in s.st[]
        for (; (i < s.n - 1) && (st[i] != '\0'); i++)
        {
            s.st[i] = st[i];
        }
        // now putting next string i.e s1.st[] in s.st[]
        for (int j = 0; i < s.n - i && s1.st[j] != '\0'; j++, i++)
        {
            s.st[i] = s1.st[j];
        }
        s.st[i] = '\0';

        return s;
    }
};

int main()
{
    STRING s1{20, "HELLO WORLD"}, s2{20, "its a string"};
    // 20 is the size of n i.e max no. of char that can be stored

    // creating another string object that store the concatenated string of s1 and s2 object

    STRING s3 = s1 + s2;
    // s1+s2 ==> s1.operator+(s2)

    cout << "pirnting strings:\n\n";
    cout << "s1 : ";
    s1.display();
    cout << "\ns2 : ";
    s2.display();
    cout << "\ns3 : ";
    s3.display();

    return 0;
}

// note : const pointer is a pointer using which value at address pointed by that pointer cannot be change
// but its address can be change