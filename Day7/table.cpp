#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    int mult;
    cout << "Enter the number : ";
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        mult = num * i;
        cout << num << " x " << i << " = " << mult << endl;
    }
    return 0;
}
