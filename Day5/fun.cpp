#include <iostream>
using namespace std;
int main()

{
    int a = 10, b = 20, c = 30;
    if (a <= b && !b)
    {
        cout << "hello";
    }
    else if (c >= a && c >= b)
    {
        cout << "hi";
    }
    else
    {
        cout << "heyy";
    }
    return 0;
}
