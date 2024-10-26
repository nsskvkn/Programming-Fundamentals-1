#include <iostream>
#include <vector>
using namespace std;

int productOfNegatives(const vector<vector<int>>& A) {
    int product = 1;
    bool hasNegative = false;

    for (int m = 0; m < A.size(); ++m) {
        for (int n = 0; n < A[m].size(); ++n) {
            if (A[m][n] < 0) {
                product *= A[m][n];
                hasNegative = true;
            }
        }
    }

    if (!hasNegative) {
        return 0; // Якщо від'ємних чисел немає, повертаємо 0
    }

    return product;
}

int main() {
    vector<vector<int>> A = {
        {3, 2, -5},
        {1, 4, -9},
        {7, 8, -3}
    };

    int result = productOfNegatives(A);

    if (result != 0) {
        cout << "Добуток від'ємних чисел: " << result << endl;
    } else {
        cout << "В множині немає від'ємних чисел." << endl;
    }

    return 0;
}


//Завдання 3

#include <iostream>
#include <vector>
using namespace std;

int productOfMainDiagonal(const vector<vector<int>>& A) {
    int product = 1;
    int size = min(A.size(), A[0].size());

    for (int i = 0; i < size; ++i) {
        product *= A[i][i];
    }

    return product;
}

int main() {
    vector<vector<int>> A = {
        {3, 2, -5},
        {1, 4, -9},
        {7, 8, -3}
    };

    int result = productOfMainDiagonal(A);

    cout << "Добуток елементів головної діагоналі: " << result << endl;

    return 0;
}
