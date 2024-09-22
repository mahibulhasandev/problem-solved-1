#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double num1 = 3.5, num2 = 7.5, sum, average;
    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    // Calculate sum
    sum = num1 + num2;

    // Calculate average
    average = sum / 2;

    // Output the average
    cout << "The average is: " << average << endl;

    return 0;
}
