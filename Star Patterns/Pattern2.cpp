#include <iostream>
using namespace std;
int main()
{
    // Write C++ code here
    int n;
    cout << "Enter the number of rows : " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}