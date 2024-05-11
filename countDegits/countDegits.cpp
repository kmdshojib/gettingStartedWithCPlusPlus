// #include <bits/stdc++.h>
// using namespace std;

// int countDegits(int n)
// {
//     int count = 0;

//     while (n > 0)
//     {
//         int remainder = n % 10;
//         count = count+1;

//         if (remainder != 0)
//         {
//             // cout << remainder << " " << endl;
//         }
//         n = n / 10;
//     }
//     // cout << count << endl;
//     return count;
// }

// int main()
// {
//     cout << countDegits(7789) << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void countNumbers(int n)
{
    int count = 0;
    while (n > 0)
    {

        int remainder = n % 10;
        count ++;
        cout << remainder << endl;
        n = n / 10;
    };
    cout <<"Count of numbers are " << count << endl;
}

int main()
{
    countNumbers(7789);
    return 0;
}
