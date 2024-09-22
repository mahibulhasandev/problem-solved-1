#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double A, B;
    cin >> A >> B;
    const double C = 3.5;
    const double D = 7.5;
    double average = (A * C + B * D) / (C + D);
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << average << endl;
    return 0;
}