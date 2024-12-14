<<<<<<< HEAD
// Заівдання 2
#include <iostream>
using namespace std;

int main() {
    int A[3][4] = { {3, 5, 2, 8}, {7, 1, 4, 10}, {9, 0, 6, 11} };

    for (int i = 0; i < 3; i++) {
        int minValue = A[i][0];
        int sum = 0;

        for (int j = 0; j < 4; j++) {
            sum += A[i][j];
            if (A[i][j] < minValue) {
                minValue = A[i][j];
            }
        }

        for (int j = 0; j < 4; j++) {
            if (A[i][j] == minValue) {
                A[i][j] = sum;
            }
        }
    }

    cout << "Оновлений масив:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//Завдання 3

#include <iostream>
using namespace std;

int main() {
    int A[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int B[3] = { 2, 4, 6 };

    int productB = 1;
    for (int i = 0; i < 3; i++) {
        productB *= B[i];
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            if (A[i] == B[j]) {
                A[i] = productB;
                break;
            }
        }
    }

    cout << "Оновлена послідовність A:\n";
    for (int i = 0; i < 10; i++) {
        cout << A[i] << " ";
=======
#include <iostream>
#include <vector>

using namespace std;

/**
 * Задано дві послідовності значень A[n] і B[m]. Замінити
 * в B[m] входження значень із A[n] на частку від ділення суми
 * елементів підпослідовності A[n] на її кількість.
 */

/**
 * Це завдання вимагає замінити всі елементи послідовності B[m],
 * які є у послідовності A[n], на середнє значення елементів
 * послідовності A[n]. Середнє значення обчислюється як сума
 * елементів послідовності A[n], поділена на її кількість.
 * 
 * Алгоритм:
 * 1. Обчислити суму елементів A[n] і їх кількість.
 * 2. Обчислити середнє значення.
 * 3. Замінити елементи у B[m], якщо вони є у A[n] і замінити їх на середнє значення.
 * 4. Вивести оновлену послідовність B[m].
 */

int main() {
    // Задаємо послідовності A і B
    vector<int> A = {1, 2, 3};  // Послідовність A[n]
    vector<int> B = {3, 5, 2, 1, 8};  // Послідовність B[m]

    // Виводимо початкові послідовності
    cout << "Початкова послідовність A: ";
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
        if (i % 2 == 0) {
            cout << "A[i] is even" << A[i] << endl;
        }
    }
    A.push_back(10);
    A.pop_back();

    cout << endl;
    cout << "Початкова послідовність B: ";
    for (int i = 0; i < B.size(); ++i) {
        cout << B[i] << " ";
    }
    cout << endl;

    // Обчислюємо суму елементів A і їх кількість
    int sumA = 0;
    for (int i = 0; i < A.size(); ++i) {
        sumA += A[i];
    }
    // Обчислюємо середнє значення
    double averageA = static_cast<double>(sumA) / A.size();

    // Замінюємо елементи у B, якщо вони є у A
    for (int i = 0; i < B.size(); ++i) {
        // Перевіряємо, чи елемент B[i] є у A
        for (int j = 0; j < A.size(); ++j) {
            if (B[i] == A[j]) {
                B[i] = averageA;  // Заміна на середнє значення
                break;  // Вихід з внутрішнього циклу, щоб не продовжувати перевірку
            }
        }
    }

    // Виводимо оновлену послідовність B
    cout << "Оновлена послідовність B : ";
    for (int i = 0; i < B.size(); ++i) {
        cout << B[i] << " ";
>>>>>>> 6f97e8203e981497bff2fe7518c8dfcbb46b9d14
    }
    cout << endl;

    return 0;
<<<<<<< HEAD
}

//Завдання 4

#include <iostream>
using namespace std;

int main() {
    int A[3][3] = { {3, 5, 2}, {7, 1, 4}, {9, 0, 6} };

    for (int col = 0; col < 3; col++) {
        int maxVal = A[0][col];
        int product = 1;

        for (int row = 0; row < 3; row++) {
            product *= A[row][col];
            if (A[row][col] > maxVal) {
                maxVal = A[row][col];
            }
        }

        for (int row = 0; row < 3; row++) {
            if (A[row][col] == maxVal) {
                A[row][col] = product;
            }
        }
    }

    cout << "Оновлений масив:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
=======
>>>>>>> 6f97e8203e981497bff2fe7518c8dfcbb46b9d14
}