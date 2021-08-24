#include <iostream>
using namespace std;
int main()
{
    int marks[5], i;
    float sum = 0;
    cout << "\n Enter Marks of Student \n";
    cout << "\n Hindi : ";
    cin >> marks[0];
    cout << "\n English : ";
    cin >> marks[1];
    cout << "\n Maths : ";
    cin >> marks[2];
    cout << "\n History : ";
    cin >> marks[3];
    cout << "\n Science : ";
    cin >> marks[4];

    for (i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }

    float avg = sum / 5;
    float per;
    per = (sum / 500) * 100;
    cout << "\n Average Marks = " << avg;
    cout << "\n Percentage = " << per << " %";
    return 0;
}