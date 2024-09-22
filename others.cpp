#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double value;
    cin >> value;
    int main_value = value;
    int coins = round((value - main_value) * 100);
    int notes100 = main_value / 100;
    main_value %= 100;
    int notes50 = main_value / 50;
    main_value %= 50;
    int notes20 = main_value / 20;
    main_value %= 20;
    int notes10 = main_value / 10;
    main_value %= 10;
    int notes5 = main_value / 5;
    main_value %= 5;
    int notes2 = main_value / 2;
    main_value %= 2;
    int coins1 = main_value;
    int coin05 = coins / 50;
    coins %= 50;
    int coin25 = coins / 25;
    coins %= 25;
    int coin10 = coins / 10;
    coins %= 10;
    int coin05_small = coins / 5;
    coins %= 5;
    int coin01 = coins;
    cout << fixed << setprecision(2);
    cout << "NOTAS:" << endl;
    cout << notes100 << " nota(s) de R$ 100.00" << endl;
    cout << notes50 << " nota(s) de R$ 50.00" << endl;
    cout << notes20 << " nota(s) de R$ 20.00" << endl;
    cout << notes10 << " nota(s) de R$ 10.00" << endl;
    cout << notes5 << " nota(s) de R$ 5.00" << endl;
    cout << notes2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << coins1 << " moeda(s) de R$ 1.00" << endl;
    cout << coin05 << " moeda(s) de R$ 0.50" << endl;
    cout << coin25 << " moeda(s) de R$ 0.25" << endl;
    cout << coin10 << " moeda(s) de R$ 0.10" << endl;
    cout << coin05_small << " moeda(s) de R$ 0.05" << endl;
    cout << coin01 << " moeda(s) de R$ 0.01" << endl;
    return 0;
}