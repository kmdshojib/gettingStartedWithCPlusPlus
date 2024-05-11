#include <iostream>
#include <cmath>
#include <typeinfo>
using namespace std;

int sumOfTwoNumbers(int a, int b)
{

    return round(a + b);
}

int main()
{
    int x, y;
    cout << "Please enter a number: ";
    cin >> x;
    if(typeid(x)!= typeid(int)){
        cout << "Please enter a valid number";
        return 0;
    }
    cout << "Please enter a another number: ";
    cin >> y;
    if(typeid(y) != typeid(int)){
        cout << "Please enter a valid number";
        return 0;
    }
    cout << "The sum of two numbers are: " << sumOfTwoNumbers(x, y) << endl;
    return 0;
}