#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int A, B;
    const int C = 12;
    cin >> A >> B;
    double result = (static_cast<double>(B) / C) * A;
    cout << fixed << setprecision(3) << result << endl;
    return 0;
}