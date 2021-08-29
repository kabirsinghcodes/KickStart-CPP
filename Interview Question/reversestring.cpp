#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "Kabir loves coding from a long time.";
    reverse(str.begin(), str.end());
    cout << "\n"
         << str;
    return 0;
}