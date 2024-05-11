#include <bits/stdc++.h>
using namespace std;

int printLargerOne(int x, int y)
{
    if (x > y)
        return x;
    else if (x < y)
        return y;
}
int main()
{
    cout << printLargerOne(1, 2) << endl;
    return 0;
}