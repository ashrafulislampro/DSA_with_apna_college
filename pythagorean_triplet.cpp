#include <iostream>
#include <cmath>
using namespace std;

bool isCheck(int x, int y, int z)
{
    int a, b, c;
    a = max(x, max(y, z));
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (a * a == (b * b + c * c))
    {
        return true;
    }
    return false;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int x, y, z;
    cin >> x >> y >> z;

    if (isCheck(x, y, z))
    {
        cout << "Pythagorean Triplet" << endl;
    }
    else
    {
        cout << "Is not Pythagorean Triplet" << endl;
    }

    return 0;
}