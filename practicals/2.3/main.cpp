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

    return 0;
}
