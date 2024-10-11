#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double num1, num2;
    char operation;


    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть оператор (+, -, *, /): ";
    cin >> operation;
    cout << "Введіть друге число: ";
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
        }
        break;
    default:
        cout << "Помилка: недійсний оператор!" << endl;
        break;
    }

    return 0;
}
