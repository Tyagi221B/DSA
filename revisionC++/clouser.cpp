#include <iostream>

int main() {
    // Outer function
    auto outerFunction = []() {
        int outerVariable = 5;

        // Inner function (closure)
        auto innerFunction = [&]() {
            return outerVariable * 2;
        };

        return innerFunction;
    };

    // Using the closure
    auto closure = outerFunction();
    int result = closure();

    // Output the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}
