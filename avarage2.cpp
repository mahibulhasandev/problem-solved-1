#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double num, num1,num2;
    cout<< "Enter Numbers: ";
    cin >> num >> num1 >> num2;
    const double A = 2;
    const double B = 3;
    const double C = 5;
    double average = (num * A + num1 * B + num2 * C) / (A + B + C);
    cout << fixed << setprecision(1) << "MEDIA = " << average << endl;
    return 0;
}