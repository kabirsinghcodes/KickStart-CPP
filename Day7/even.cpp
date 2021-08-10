#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "False";
    }
    return 0;
}
