#include <iostream>
using namespace std;

bool checkprime(int n)
{
    bool isprime = true;
    if (n == 0 || n == 1)
    {
        isprime = false;
    }
    else
    {
        for (int i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                isprime = false;
                break;
            }
        }
    }
    return isprime;
}

int main()
{
    int n;
    cout << "Enter a positive number : " << endl;
    cin >> n;
    if (checkprime(n))
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Non prime Number";
    }
    return 0;
}