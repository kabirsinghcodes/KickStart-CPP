#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, n1 = 0, n2 = 1, nt;
    cout << "Enter the number of terms : ";
    cin >> n;
    cout << "---- Fibonacci Series ----";
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << n1 << " , " << endl;
            continue;
        }
        if (i == 2)
        {
            cout << n2 << " , " << endl;
            continue;
        }
        nt = n1 + n2;
        n1 = n2;
        n2 = nt;

        cout << nt << " , " << endl;
    }
    return 0;
}
