<<<<<<< HEAD
/*
Done by:
    Student: Yaroslav Yavon
    Group: 123:1
     Lab 2.1
*/

=======
>>>>>>> 6f97e8203e981497bff2fe7518c8dfcbb46b9d14
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

<<<<<<< HEAD
// Завдання №1
int main() {
    setlocale(LC_ALL, "RU");

    int el[7];  

    for (int i = 0; i < 7; i++) {
        if (i % 2 == 0) {
            el[i] = i * i + 1;  // Для парних 
        } else {
            el[i] = i - 8;  // Для непарних 
        }
    }

    int size = 7;  // Розмір масиву

    for (int i = 0; i < size - 1; i++) {
        for (int k = 0; k < size - i - 1; k++) {
            if (el[k] > el[k + 1]) {
                int temp = el[k];
                el[k] = el[k + 1];
                el[k + 1] = temp;
            }
        }
    }

    cout << "Відсортований масив: ";
    for (int i = 0; i < size; i++) {
        cout << el[i] << endl;
    }
    cout << endl;

    return 0;
}

// Завдання №2
int arr1[10], arr2[10], arr3[10];

int main() {
    setlocale(LC_ALL, "RU");

    for (int i = 0; i < 10; i++) {
        arr1[i] = 117 + i;
    }

    for (int i = 0; i < 10; i++) {
        arr2[i] = 127 - 2 * i;
    }

    int k = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr1[i] == arr2[j]) {
                arr3[k] = arr1[i];
                k++;
                break;
            }
        }
    }

    if (k >= 2) {
        int min1 = arr3[0];
        int min2 = arr3[1];

        if (min1 > min2) {
            swap(min1, min2);
        }

        for (int i = 2; i < k; i++) {
            if (arr3[i] < min1) {
                min2 = min1;
                min1 = arr3[i];
            }
            else if (arr3[i] < min2) {
                min2 = arr3[i];
            }
        }

        
        int s = min1 + min2;
        cout << "Сума двох мінімальних елементів: " << s << endl;
    }
    else {
        cout << "У масиві недостатньо елементів для пошуку двох мінімальних значень." << endl;
    }
=======
// Function for bubble sort with the ability to choose the sorting direction
void bubbleSort(int arr[], int n, bool ascending = true) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // If ascending mode, sort in ascending order
            if (ascending) {
                if (arr[j] > arr[j + 1]) {
                    // Change places if elements are not in the correct order
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            // If descending mode, sort in descending order
            else {
                if (arr[j] < arr[j + 1]) {
                    // Change places if elements are not in the correct order
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(static_cast<unsigned>(time(0)));

    int n = 10;
    int arr[10]; //0, 1, 2, 3
    int arr2[4] = {3, 5, 8, 9};

    for (int i = 0; i < n; i++) {
        cout << " " << arr[i];
        arr[i] = rand() % 100;
    }
    cout << ' ' << endl;

    cout << "Initial array: ";
    printArray(arr, n);

    // Sorting in ascending order
    cout << "Sorting in ascending order: ";
    bubbleSort(arr, n); // true - ascending
    printArray(arr, n);

    // Sorting in descending order
    cout << "Sorting in descending order: ";
    bubbleSort(arr, n, false); // false - descending
    printArray(arr, n);
>>>>>>> 6f97e8203e981497bff2fe7518c8dfcbb46b9d14

    return 0;
}


<<<<<<< HEAD
// Завдання №3

int main() {
    setlocale(LC_ALL, "RU");

    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int arr1[4];
    for (int i = 0; i < 4; i++) {
        arr1[i] = arr[i][i]; 
    }

    cout << "Елементи головної діагоналі 4x4:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    double arr2[4][5] = {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {6.6, 7.7, 8.8, 9.9, 10.0},
        {11.1, 12.2, 13.3, 14.4, 15.5},
        {16.6, 17.7, 18.8, 19.9, 20.0}
    };

    double avgArr[4];
    for (int i = 0; i < 4; i++) {
        double sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += arr2[i][j];
        }
        avgArr[i] = sum / 5.0; 
    }

    cout << "Середнє арифметичне значення елементів рядків 4x5:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << fixed << setprecision(2) << avgArr[i] << " "; 
    }
    cout << endl;

    return 0;
}

=======
>>>>>>> 6f97e8203e981497bff2fe7518c8dfcbb46b9d14
