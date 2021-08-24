#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 3, 5, 5, 4};
    int n = 15;
    int i;
    for (i = 0; i < 6; i++)
    {
        if (arr[i] == n)
        {
            cout << "Found the element at : " << i << endl;
            break;
        }
    }
    if (i == 6)
    {
        cout << "Not found";
    }

    return 0;
}