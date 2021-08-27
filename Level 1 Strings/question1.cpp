#include <iostream>
using namespace std;
int main()
{
    //step 1
    string str;
    char c;

    //step 2
    cout << "Enter the string : " << endl;
    cin >> str;
    cout << "Enter the character : " << endl;
    cin >> c;

    //step 3
    int startindex = -1;
    int endindex = -1;

    //step 4
    for (int i = 0; i < str.length(); i++)
    {
        //step 5
        if (str[i] == c)
        {
            if (startindex == -1)
            {
                startindex = i;
            }
            endindex = i;
        }
    }
    // step 6
    if (startindex == -1)
    {
        cout << "The character is not present in the string." << endl;
    }
    else
    {
        cout << "First occurance : " << startindex + 1 << endl;
        cout << "Last Occurance : " << endindex + 1 << endl;
    }
    return 0;
}