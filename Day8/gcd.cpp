#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n1, n2;
    cout << "Enter the two Numbers : ";
    cin >> n1 >> n2;
    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 -= n2;
        }
        else
        {
            n2 -= n1;
        }
    }
    cout << "GCD : " << n1;
    return 0;
}
