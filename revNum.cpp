#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int x)
{

    int revNum = 0;

    while (x > 0)
    {

        int lastDegit = x % 10;

        x = x / 10;

        revNum = revNum * 10 + lastDegit;
    }

    return revNum;
}

int main()
{

    cout << reverseNumber(990) << endl;
    cout << reverseNumber(9909) << endl;

    return 0;
}