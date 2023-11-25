#include <iostream>
#include <Windows.h>
using namespace std;
    

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int m, n;

    // Введення користувачем значень m і n
    std::cout << "Введіть початкове число m: ";
    std::cin >> m;

    std::cout << "Введіть кінцеве число n: ";
    std::cin >> n;

    std::cout << "Прості числа в діапазоні [" << m << ", " << n << "]:\n";

    int current = m;

    while (current <= n) {
        if (is_prime(current)) {
            std::cout << current << " ";
        }

        ++current;
    }

    std::cout << std::endl;

    return 0;
}
