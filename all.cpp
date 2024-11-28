#include <iostream>

int main() {
    for (int i = 20; i <= 50; ++i) {
        if (i % 3 == 0 && i % 5 != 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}