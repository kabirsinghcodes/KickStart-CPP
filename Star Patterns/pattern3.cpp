#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 5; j >= i; j--)
        {
            cout << "$";
        }
        cout << "\n";
    }
    return 0;
}
