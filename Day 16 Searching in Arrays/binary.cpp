#include <iostream>
using namespace std;

int binarysearch(int arr[], int se, int n)
{
    int li = 0;
    int hi = n - 1;
    while (li <= hi)
    {
        int mi = (li + hi) / 2;
        if (arr[mi] == se)
        {
            return mi + 1;
        }
        else if (se < arr[mi])
        {
            hi = mi - 1;
        }
        else
        {
            li = mi + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int inputarr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> inputarr[i];
    }
    int se;
    cout << "Enter the element you want to search : ";
    cin >> se;

    cout << "Found at : " << binarysearch(inputarr, se, n) << endl;
    return 0;
}