<<<<<<< HEAD
// Завдання 2

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int maxIdx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }
        swap(arr[i], arr[maxIdx]);
    }
}

vector<int> getNegativeValues(const vector<int>& A) {
    vector<int> B;
    for (int val : A) {
        if (val < 0) {
            B.push_back(val);
        }
    }
    return B;
}

int main() {
    vector<int> A = {3, -1, 4, -5, 9, -2, 6, -7, -3, 8};
    vector<int> B = getNegativeValues(A);

    selectionSort(B);

    cout << "Відсортована послідовність B: ";
    for (int val : B) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}


//Завдання 3

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void sortSequences(vector<vector<int>>& A) {
    for (int m = 0; m < A.size(); ++m) {
        bubbleSort(A[m]);
    }
}

int main() {
    vector<vector<int>> A = {
        {3, 2, -5},
        {1, 4, -9},
        {7, 8, -3}
    };

    sortSequences(A);

    cout << "Відсортовані послідовності:" << endl;
    for (const auto& seq : A) {
        for (int val : seq) {
            cout << val << " ";
        }
        cout << endl;
    }

=======
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function for bubble sort with the ability to choose the sorting direction
void bubbleSort(int arr[], int n, bool ascending = true) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // If ascending mode, sort in ascending order
            if (ascending) {
                if (arr[j] > arr[j + 1]) {
                    // Change places if elements are not in the correct order
                    int& a = arr[j];
                    int& b = arr[j + 1];
                    swap(a, b);
                }
            }
            // If descending mode, sort in descending order
            else {
                if (arr[j] < arr[j + 1]) {
                    // Change places if elements are not in the correct order
                    swap(arr[j], arr[j + 1]);
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

void printVector(vector<int> vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

/**
 * Задано послідовність значень A[n]. Сформувати нову
 * послідовність B[m] з парних значень послідовності A[n] та
 * відсортувати її за зростанням алгоритмом бульбашки.
 */

int main() {
    srand(static_cast<unsigned>(time(0)));

    int n = 10;
    int arr[10];
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        arr[i] = rand() % 100;
    }
    cout << endl;

    cout << "Initial array: ";
    printArray(arr, n);

    // Sorting in ascending order
    cout << "Sorting in ascending order: ";
    bubbleSort(arr, n); // true - ascending
    printArray(arr, n);

    cout << "Create new array with even numbers array : ";
    int evenNumbers[n];
    // std::vector<int> evenNumbers(n);
    int evenCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenNumbers[evenCount++] = arr[i];
        }
    }
    printArray(evenNumbers, n);
    // printVector(evenNumbers);

    // Or using vector
    cout << "Create new array with even numbers vector: ";
    vector<int> evenNumbersVector;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenNumbersVector.push_back(arr[i]);
        }
    }
    printVector(evenNumbersVector);
>>>>>>> 6f97e8203e981497bff2fe7518c8dfcbb46b9d14
    return 0;
}
