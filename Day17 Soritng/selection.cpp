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
    int input[5] = {33, 55, 22, 542, 2};
    selectionsort(input, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << input[i] << " ";
    }
}