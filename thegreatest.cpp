#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int result = (A + B + abs(A - B)) / 2;
    int Output = (result + C + abs(result - C)) / 2;
    cout << Output << " eh o maior" << endl;
    return 0;
}