#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int X;
    double Y;
    cin >> X >> Y;
    double result = X / Y;
    cout << fixed << setprecision(3) << result << " km/l" <<endl;
    return 0;
}