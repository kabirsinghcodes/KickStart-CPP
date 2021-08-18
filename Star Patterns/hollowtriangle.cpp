#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 5 || j == 1 || j == i)
            {
                cout << "$";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}