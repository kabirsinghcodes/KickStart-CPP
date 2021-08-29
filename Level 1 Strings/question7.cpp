#include <iostream>
using namespace std;
int main()
{
    string s1 = "codes";
    string s2 = "kabirsinghcodes";
    string s3;
    bool present = false;

    for (int i = 0; i < (s2.length() - s1.length()) + 1; i++)
    {
        s3 = s2.substr(i, s1.length());
        if (s1.compare(s3) == 0)
        {
            present = true;
            break;
        }
    }
    cout << present << endl;

    return 0;
}