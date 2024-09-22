#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double R;
    const double pi = 3.14159;
    cin >> R;
    double result = (4/3.0) * pi * pow(R,3);
    cout << fixed << setprecision(3) << "VOLUME = " << result << endl;
    return 0;
}