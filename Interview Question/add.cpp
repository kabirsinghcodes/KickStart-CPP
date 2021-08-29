#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.'five
    string str[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a;
    int b;
    cin >> a;
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        if (i > 9)
        {
            if (i % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
        else
        {
            cout << str[i] << endl;
        }
    }
    return 0;
}