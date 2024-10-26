// Заівдання 2
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int A[3][4] = { {3, 5, 2, 8}, {7, 1, 4, 10}, {9, 0, 6, 11} };
    int minValue = A[0][0], minRow = 0, minCol = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (A[i][j] < minValue) {
                minValue = A[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    cout << "Мінімальне значення: " << minValue << " на позиції [" << minRow << "][" << minCol << "]\n";
    return 0;
}

//Завдання 3

#include <iostream>
using namespace std;

int main() {
        setlocale(LC_ALL, "RU");

    int A[3][4] = { {3, -5, 2, -8}, {7, -1, 4, 10}, {9, 0, -6, 11} };
    int maxNegative = -1000;  

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (A[i][j] < 0 && A[i][j] > maxNegative) {
                maxNegative = A[i][j];
            }
        }
    }

    cout << "Максимальне від'ємне значення: " << maxNegative << "\n";
    return 0;
}

//Завдання 4

#include <iostream>
using namespace std;

int main() {
        setlocale(LC_ALL, "RU");

    int A[3][4] = { {3, 5, 2, -8}, {7, -1, 4, 10}, {9, 0, -6, 11} };
    int minPositive = 1000;  
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (A[i][j] > 0 && A[i][j] < minPositive) {
                minPositive = A[i][j];
            }
        }
    }

    cout << "Мінімальне додатне значення: " << minPositive << "\n";
    return 0;
}