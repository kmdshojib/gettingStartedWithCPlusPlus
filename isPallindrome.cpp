// #include <bits/stdc++.h>
// using namespace std;

// // step 1: reverse the number

// string isPallindrome(int num)
// {
//     string covertedNum = to_string(num);
//     reverse(covertedNum.begin(), covertedNum.end());
//     int covertedString = stoi(covertedNum);
//     if (covertedString == num)
//         return "The number is Pallindrome!";
//     else
//         return "The number is not Pallindrome!";
// }

// int main()
// {
//     cout << isPallindrome(1234) << endl;
//     cout << isPallindrome(2002) << endl;

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

void isPallindrome(int x)
{

    int rev = 0;
    int orginalNum = x;
    while (x > 0)
    {

        int lastDegit = x % 10;
        x = x / 10;
        rev = rev * 10 + lastDegit;
    }
    
    if (orginalNum == rev)
    {
        cout << "Your number is Pallindrome!" << endl;
    }
    else
    {
        cout << "Your number is not pallindreome!" << endl;
    }
}

int main()
{
    isPallindrome(99);
    isPallindrome(20);
    isPallindrome(2002);
    return 0;
}