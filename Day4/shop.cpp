#include <iostream>
using namespace std;
int main()
{
    int q;
    cout << "Enter the quantity of things bought by the user : ";
    cin >> q;
    int total = q * 100;
    if (total >= 1000)
    {
        cout << "Eligible for discount";
    }
    else
    {
        cout << "Not eligible for discount";
    }
}