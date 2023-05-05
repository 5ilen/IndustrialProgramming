#include <iostream>
#include <string>
#include <algorithm>

// шаблонная функция сортировки
template <typename T>
void sortArray(T* arr, size_t size) {
    // используем функцию sort() из стандартной библиотеки
    std::sort(arr, arr + size);
}

// перегрузка шаблонной функции сортировки для строк в библиографическом виде
template <>
void sortArray<std::string>(std::string* arr, size_t size) {
    // используем функцию sort() из стандартной библиотеки
    std::sort(arr, arr + size, [](const std::string& a, const std::string& b) {
        // сравниваем строки в библиографическом виде
        std::string s1, s2;
        for (const auto& c : a) {
            if (isalpha(c)) s1 += tolower(c);
        }
        for (const auto& c : b) {
            if (isalpha(c)) s2 += tolower(c);
        }
        return s1 < s2;
    });
}

// пример использования шаблонной функции сортировки
int main() {
    int arr1[] = {5, 2, 8, 1, 9};
    size_t size1 = sizeof(arr1) / sizeof(arr1[0]);
    sortArray(arr1, size1);
    for (size_t i = 0; i < size1; i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    double arr2[] = {3.14, 1.0, 2.71, 0.0, -1.0};
    size_t size2 = sizeof(arr2) / sizeof(arr2[0]);
    sortArray(arr2, size2);
    for (size_t i = 0; i < size2; i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    std::string arr3[] = {"Hello", "world", "apple", "banana", "zebra"};
    size_t size3 = sizeof(arr3) / sizeof(arr3[0]);
    sortArray(arr3, size3);
    for (size_t i = 0; i < size3; i++) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}