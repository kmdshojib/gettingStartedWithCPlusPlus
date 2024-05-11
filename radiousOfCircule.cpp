#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double radiousOfCircle(double r)
{
    double pi = 3.14159265;
    double radious = 2 * pi * r;
    return radious;
}

int main()
{
    cout << "Radious Of Circle is defined : " << radiousOfCircle(4) << endl;
    int nubmberArr[] = {10, 20, 30, 40, 50};
    nubmberArr[] = 60;
    int length = sizeof(nubmberArr) / sizeof(nubmberArr[0]);

    for (int i = 0; i < length; i++)
    {
        cout << "Element at index is: " << i << ": " << nubmberArr[i] << endl;
    }
    return 0;
}