#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbersArr = {10, 4, 6, 8, 0, 2, 1};
    numbersArr.push_back(15);
    int n = sizeof(numbersArr) / sizeof(numbersArr[0]);
    sort(numbersArr.begin(), numbersArr.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << numbersArr[i] << " " << endl;
    }
    // stack<int> st;
    // st.push(9);
    // st.push(10);
    // st.push(19);
    // st.push(15);
    // cout << endl << st.top() << endl;
    string s = "Apple";
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    return 0;
}