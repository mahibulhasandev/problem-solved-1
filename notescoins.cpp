#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double value;
    cin >> value;

    int main_value = value;
    int coins = round((value - main_value)* 100);

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

    int coins1 = notes;
    
    int coin05 = value / 50;
    coins % 50;
    int coin25 = value  / 25;
    coins % 25;
    int coin10 = value / 10;
    coins % 10;
    int coin5 = value / 5;
    coins % 5;
    int coin01 = coins;


    cout << "NOTAS:" <<endl;
    cout << notes100 << " nota(s) de R$ 100.00" << endl;
    cout << notes50 << " nota(s) de R$ 50.00" << endl;
    cout << notes20 << " nota(s) de R$ 20.00" << endl;
    cout << notes10 << " nota(s) de R$ 10.00" << endl;
    cout << notes5 << " nota(s) de R$ 5.00" << endl;
    cout << notes2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" <<endl;
    cout << coins1 << " moeda(s) de R$ 1.00" << endl;
    cout << coin05 << " moeda(s) de R$ 0.50" << endl;
    cout << coin25 << " moeda(s) de R$ 0.25" << endl;
    cout << coin10 << " moeda(s) de R$ 0.10" << endl;
    cout << coin05 << " moeda(s) de R$ 0.05" << endl;
    cout << coin01 << " moeda(s) de R$ 0.01" << endl;
    return 0;
}