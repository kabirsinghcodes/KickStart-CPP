#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 10;
    if (!(a ^ b))
    {
        cout << "A is Equal to B.";
    }
    else
    {
        cout << "A isn't equal to B.";
    }
    return 0;
}