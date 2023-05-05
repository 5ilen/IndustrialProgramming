#include <iostream>

// шаблонная функция swap()
template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

// пример использования шаблонной функции swap()
int main() {
    int a = 5, b = 10;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::string str1 = "Hello", str2 = "World";
    std::cout << "str1 = " << str1 << ", str2 = " << str2 << std::endl;
    swap(str1, str2);
    std::cout << "str1 = " << str1 << ", str2 = " << str2 << std::endl;

    return 0;
}