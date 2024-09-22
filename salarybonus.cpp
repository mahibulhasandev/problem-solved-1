#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    string name;
    double a, b;
    cin >>name;
    cin >> a;
    cin >> b;
    double x = b * 0.15;
    double y = a + x;
    cout << "TOTAL = R$ " << fixed << setprecision(2) <<y << endl;
}