#include <iostream>
using namespace std;
int main()
{
    int numb = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << numb << " ";
            numb++;
        }
        cout << endl;
    }
    return 0;
}