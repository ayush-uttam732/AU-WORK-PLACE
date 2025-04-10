#include <iostream>

int main() {
    try {
        // Example: Throwing an integer exception
        throw 42;
    } catch (...) {
        std::cout << "An exception was caught!" << std::endl;
    }

    return 0;
}