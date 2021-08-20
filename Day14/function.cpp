#include <iostream>
using namespace std;

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int x, y, p, q, r, s, t, u;
    cin >> x >> y;
    int mysum1 = add(x, y);
    cout << mysum1;

    cin >> p >> q;
    int mysum2 = add(p, q);
    cout << mysum2;

    cin >> r >> s;
    int mysum3 = add(r, s);
    cout << mysum3;

    cin >> t >> u;
    int mysum4 = add(t, u);
    cout << mysum4;

    return 0;
}