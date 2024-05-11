// for starndered template
#include<bits/stdc++.h>
using namespace std;

class TestClass
{
public:
    void testMethod();
};
void TestClass::testMethod()
{
    cout << "Testing methods" << endl;
}
int main()
{
    TestClass testObj;
    testObj.testMethod();
    vector<int> testArr = {1, 2, 3, 4, 5, 6, 7};
    testArr.emplace_back(9);
    int length = testArr.size();

    cout << testArr.back() << endl;

    // for (int i = 0; i < length; i++) {
    //     cout << "index : " << i << " " << testArr[i] << endl;
    // }

    // for (auto i = testArr.begin(); i != testArr.end(); i++)
    // {
    //     cout << *(i) << endl;
    // }

    for (auto i : testArr)
    {
        cout << i << endl;
    }

    return 0;
}