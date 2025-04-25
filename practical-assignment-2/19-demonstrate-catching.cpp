//19. Write a C++ program to demonstrate the catching of all exceptions.

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