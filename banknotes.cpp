#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int value;
    cin >> value;
    int main_value = value;
    int notes100 = value / 100;
    value = value % 100;
    int notes50 = value / 50;
    value = value % 50;
    int notes20 = value  / 20;
    value = value % 20;
    int notes10 = value / 10;
    value = value % 10;
    int notes5 = value / 5;
    value = value % 5;
    int notes2 = value / 2;
    value = value % 2;
    int notes1 = value / 1;
    cout << main_value <<endl;
    cout << notes100 << " nota(s) de R$ 100,00" << endl;
    cout << notes50 << " nota(s) de R$ 50,00" << endl;
    cout << notes20 << " nota(s) de R$ 20,00" << endl;
    cout << notes10 << " nota(s) de R$ 10,00" << endl;
    cout << notes5 << " nota(s) de R$ 5,00" << endl;
    cout << notes2 << " nota(s) de R$ 2,00" << endl;
    cout << notes1 << " nota(s) de R$ 1,00" << endl;
    return 0;
}