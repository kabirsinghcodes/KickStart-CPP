#include <iostream>
using namespace std;
int main()
{
    int money;
    cout << "Enter the amount of money you have : ";
    cin >> money;
    cout << endl;
    if (money >= 10000)
    {
        cout << "You should go with group 1!";
    }
    else if (money >= 5000 && money < 10000)
    {
        cout << "You should go with group 2!";
    }
    else
    {
        cout << "Yout should go with group 3!";
    }

    return 0;
}