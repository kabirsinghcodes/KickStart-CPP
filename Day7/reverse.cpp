#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, reversedNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0)
    {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;
    return 0;
}
