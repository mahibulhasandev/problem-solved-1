#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double num1 = , num2, num3, sum, average;
    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the second number: ";
    cin >> num3;
    // Calculate sum
    sum = num1 + num2 + num3;

    // Calculate average
    average = sum / 3;

    // Output the average
    cout << "The average is: " << average << endl;

    return 0;
}
