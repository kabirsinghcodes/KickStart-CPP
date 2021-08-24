#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum;
    cout << "How many numbers do you want to enter? " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the " << n << " numbers : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    float arith = sum / n;
    cout << "The arithematic mean of " << n << " numbers is : " << arith << endl;
    return 0;
}