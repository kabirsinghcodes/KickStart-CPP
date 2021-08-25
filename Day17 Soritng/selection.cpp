#include <iostream>
using namespace std;

void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        //code to find the smallest element
        int min = arr[i], minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minindex = j;
            }
        }
        //swap
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
}

int main()
{
    int size;
    cout << "Enter the size of your array : " << endl;
    cin >> size;
    int input[size];
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    selectionsort(input, size);
    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }
}