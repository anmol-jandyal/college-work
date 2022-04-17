#include <iostream>
#include <vector>
using namespace std;
class factorial
{
    int n;
    vector<int> ans; // we store the ans of factorial in vector ans

public:
    factorial(int n)
    {
        this->n = n;
        ans.push_back(1); // put 1 at the last of the array
    }
    void calculate();
    void display()
    {
        for (long long unsigned int i = 0; i < ans.size(); i++) // i is taken llu int as ans.size() return llu value
        {
            cout << ans[i];
        }
    }
};
void factorial::calculate()
{
    if (n == 0)
        return;

    int carry = 0, x = 0, j = 0;

    for (int i = 1; i <= n; i++)
    {
        // after every iteration carry become 0

        // following loop do similar thing as we do in multiplication
        for (j = x; j >= 0; j--)
        {
            carry += i * ans[j];
            ans[j] = carry % 10;
            carry /= 10;
        }

        // if carry still contain any value so we move the values forward and place that value of carry at front

        while (carry)
        {
            ans.insert(ans.begin(), carry % 10);
            carry /= 10;
            x++;
        }
    }
}

int main()
{
    int n;
    cout << "enter the no. whose factorial needed:";
again:
    cin >> n;
    if (n < 0)
    {
        cout << "factorial of negative no. is not be calculated so please enter any positive no.";
        goto again;
    }

    factorial obj(n);
    obj.calculate();
    obj.display();
}