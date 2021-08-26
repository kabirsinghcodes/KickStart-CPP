#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "abcdefg";
    s1.erase(1, 1);
    cout << s1 << endl;
    return 0;
}