#include <iostream>
#include <stdexcept>

class Array {
private:
    int* data;
    int size;

public:
    Array(int size) : size(size) {
        data = new int[size];
    }

    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Invalid index");
        }
        return data[index];
    }

    ~Array() {
        delete[] data;
    }
};

int main() {
    try {
        Array arr(5);
        arr[2] = 10;
        std::cout << "Element at index 2: " << arr[2] << std::endl;
        std::cout << "Element at index -1: " << arr[-1] << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
