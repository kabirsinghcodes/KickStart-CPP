#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, rev = 0, rem;
    cout << "Enter your integer : ";
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    cout << "Reversed Number : " << rev;
    return 0;
}
