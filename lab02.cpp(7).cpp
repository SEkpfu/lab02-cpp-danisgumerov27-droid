#include <iostream>

int main() {
    double num1, num2;
    char op;

    std::cout << "Введите два числа: ";
    std::cin >> num1 >> num2;

    std::cout << "Введите операцию (+, -, *): ";
    std::cin >> op;

    switch (op) {
    case '+':
        std::cout << "Результат: " << num1 + num2 << std::endl;
        break;
    case '-':
        std::cout << "Результат: " << num1 - num2 << std::endl;
        break;
    case '*':
        std::cout << "Результат: " << num1 * num2 << std::endl;
        break;
    default:
        std::cout << "Ошибка: неизвестная операция." << std::endl;
        break;
    }

    return 0;
}
