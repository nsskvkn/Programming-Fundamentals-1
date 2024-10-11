
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    double num1, num2;
    char operation;

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите оператор (+, -, *, /): ";
    cin >> operation;
    cout << "Введите второе число: ";
    cin >> num2;

    switch (operation) {
    case '+':
        cout << "Результат: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Результат: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Результат: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "Результат: " << num1 / num2 << endl;
        } else {
            cout << "Ошибка: деление на ноль!" << endl;
        }
        break;
    default:
        cout << "Ошибка: недопустимый оператор!" << endl;
        break;
    }

    return 0;
}
