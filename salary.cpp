#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int A, B;
    float D, C;
    cin >> A;
    cin >> B;
    cin >> C;
    D = B * C;
    cout << "NUMBER = " << A <<endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << D << endl;
    return 0;
}