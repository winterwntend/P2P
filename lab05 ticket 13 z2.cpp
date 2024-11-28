#include <iostream>

int main() {
  long a = 1, b = 1, sum = 0;
  for (int i = 0; i < 30; ++i) {
    sum += a;
    b = a + b;
    a = b - a; 
  }
  std::cout << "Сумма первых 30 чисел Фибоначчи: " << sum << std::endl;
  return 0;
}
