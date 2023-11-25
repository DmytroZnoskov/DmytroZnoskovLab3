#include <iostream>
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;

    // Введення користувачем значень a і b
    std::cout << "Введіть число a: ";
    std::cin >> a;

    std::cout << "Введіть число b: ";
    std::cin >> b;

    std::cout << "Числа, які діляться на обидва числа " << a << " і " << b << ":\n";

    int current = 1;

    while (current <= 100) {  // Припустимо, що шукаємо числа в діапазоні від 1 до 100.
        if (current % a == 0 && current % b == 0) {
            std::cout << current << " ";
        }

        ++current;
    }

    std::cout << std::endl;

    return 0;
}
