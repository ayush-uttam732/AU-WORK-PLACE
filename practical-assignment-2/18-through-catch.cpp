#include <iostream>
using namespace std;

int main() {
    try {
        // Throwing an exception
        throw runtime_error("An exception has occurred!");
    } catch (const runtime_error& e) {
        // Handling the exception
        cout << "Caught an exception: " << e.what() << endl;
    }

    cout << "Program continues after the catch block." << endl;
    return 0;
}