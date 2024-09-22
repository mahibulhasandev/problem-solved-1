#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int value;
    cin >> value;
    int year = value / 365;
    int remain = value % 365;
    int month = remain / 30;
    int days = remain % 30;
    cout << year << " ano(s)" << endl;
    cout << month << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;
    return 0;
}