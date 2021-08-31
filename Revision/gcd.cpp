#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "enter two numbers : " << endl;
    cin >> n1 >> n2;
    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 = n1 - n2;
        }
        else
        {
            n2 = n2 - n1;
        }
    }
    cout << "GCD = " << n1;
    return 0;
}