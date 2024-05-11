#include <iostream>
#include <cmath>

using namespace std;


double distanceBetweenTwoPoinhts(double x1, double y1, double x2, double y2) {
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return distance;
}

int main() {
    cout << "The distance between two points is: " << distanceBetweenTwoPoinhts(2, 3, 5, 7);
    return 0;
}