#include <iostream>
using namespace std;

// Class template
template <typename T>
class Calculator {
private:
    T num1, num2;

public:
    // Constructor
    Calculator(T n1, T n2) : num1(n1), num2(n2) {}

    // Member functions
    T add() { return num1 + num2; }
    T subtract() { return num1 - num2; }
    T multiply() { return num1 * num2; }
    T divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Division by zero error!" << endl;
            return 0;
        }
    }
};

int main() {
    // Integer calculator
    Calculator<int> intCalc(10, 5);
    cout << "Integer calculations:" << endl;
    cout << "Addition: " << intCalc.add() << endl;
    cout << "Subtraction: " << intCalc.subtract() << endl;
    cout << "Multiplication: " << intCalc.multiply() << endl;
    cout << "Division: " << intCalc.divide() << endl;

    // Double calculator
    Calculator<double> doubleCalc(5.5, 2.2);
    cout << "\nDouble calculations:" << endl;
    cout << "Addition: " << doubleCalc.add() << endl;
    cout << "Subtraction: " << doubleCalc.subtract() << endl;
    cout << "Multiplication: " << doubleCalc.multiply() << endl;
    cout << "Division: " << doubleCalc.divide() << endl;

    return 0;
}