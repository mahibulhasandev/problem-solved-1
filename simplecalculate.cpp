#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int code, num ;
    double price1;
    int code2, num2;
    double price2;
    cin >> code >> num >> price1;
    cin >> code2 >> num2 >> price2;
    double total = (num * price1) + (num2 * price2);
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;
    return 0;
}