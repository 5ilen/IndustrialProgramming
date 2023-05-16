#include <iostream>
#include <set>
#include <stdexcept>

int findElement(const std::set<int>& numbers, int element) {
    if (numbers.empty()) {
        throw std::logic_error("Set is empty");
    }

    auto it = numbers.find(element);
    if (it == numbers.end()) {
        throw std::logic_error("Element not found");
    }

    return *it;
}

int main() {
    std::set<int> numbers;
    try {
        int result = findElement(numbers, 42);
        std::cout << "Found element: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
