#include <iostream>
#include <cmath>
using namespace std;

double areaOfTriangle(double x, double y, double z)
{
    double semiParams = (x + y + z) / 2;

    double area = sqrt(semiParams * (semiParams - x) * (semiParams - y) * (semiParams - z));
    return area;
}

int main()
{
    cout << "The area of triangle is : " << areaOfTriangle(5, 7, 8) << endl;
    return 0;
}