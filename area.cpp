#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Enter radius: ";
    double radius;
    cin >> radius;
    const double pi = 3.14159;
    double area = pi * pow(radius, 2);
    cout << area;
    return 0;
}