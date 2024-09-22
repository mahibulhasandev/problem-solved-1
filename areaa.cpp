#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double area_triangle = (a * c) / 2.0;
    double area_circle = 3.14159 * c * c;
    double area_trapezium = ((a + b) *c) / 2.0;
    double area_square = b * b;
    double area_rectangle = a * b;
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << area_triangle <<endl;
    cout << "CIRCULO: " << area_circle << endl;
    cout << "TRAPEZIO: " << area_trapezium << endl;
    cout << "QUADRADO: " << area_square << endl;
    cout << "RETANGULO: " <<area_rectangle << endl;
    return 0;
}