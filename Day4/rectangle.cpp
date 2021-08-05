#include <iostream>
using namespace std;
int main()
{
    int length, breadth;
    cout << "Enter the length and breadth of the rectangle = ";
    cin >> length;
    cin >> breadth;
    if (length == breadth)
    {
        cout << "It is a square";
    }
    else
    {
        cout << "It is a rectangle";
    }
    return 0;
}
