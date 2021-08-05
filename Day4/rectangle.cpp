#include <iostream>
using namespace std;
int main()
{
    int length, breadth;
    cout << "Enter the length and breadth of the rectangle : " << endl;
    cin >> length;
    cout << endl;
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
