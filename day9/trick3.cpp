#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the two numbers : " << endl;
    cin >> a >> b;
    int sum = a - (-b);
    cout << sum;
    return 0;
}