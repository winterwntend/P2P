#include <iostream>
#include <vector>

int main() {
    int N;
    std::cout << "Введите размер массива: ";
    std::cin >> N;

    std::vector<int> array(N);
    std::cout << "Введите элементы массива:\n";
    for (int i = 0; i < N; ++i) {
        std::cin >> array[i];
    }

    std::cout << "Четные числа:\n";
    for (int i = 0; i < N; ++i) {
        if (array[i] % 2 == 0) {
            std::cout << array[i] << " ";
        }
    }

    std::cout << "\nНечетные числа в обратном порядке:\n";
    for (int i = N - 1; i >= 0; --i) {
        if (array[i] % 2 != 0) {
            std::cout << array[i] << " ";
        }
    }

    return 0;
}
