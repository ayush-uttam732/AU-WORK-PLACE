//17=>17. write a C++ program for swapping two values using function templates.

#include <iostream>
using namespace std;

// Function template for swapping two values
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    double p = 1.5, q = 2.5;
    cout << "\nBefore swapping: p = " << p << ", q = " << q << endl;
    swapValues(p, q);
    cout << "After swapping: p = " << p << ", q = " << q << endl;

    char c1 = 'A', c2 = 'B';
    cout << "\nBefore swapping: c1 = " << c1 << ", c2 = " << c2 << endl;
    swapValues(c1, c2);
    cout << "After swapping: c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}