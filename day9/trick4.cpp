#include <iostream>
using namespace std;
int main()
{
    // Write C++ code here
    int a;
    cout << "Enter your number : " << endl;
    cin >> a;
    a = a >> 3;
    cout << "Answer : " << a;
    return 0;
}