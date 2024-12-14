<<<<<<< HEAD
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
        return 0; 
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
=======
/**
 * Done by:
 * Student Name: Smal Margaryta
 * Student Group: 123
 * Practic 2.4
 */

#include <iostream>
#include<iomanip>
#include<vector>
#include<cstdlib>
#include<ctime>
#include <fstream>

using namespace std;
//Задача - Christmas Tree

//Основна вимоги(Закриється одна практична -> 2.3 або 2.4) Напишіть програму, яка отримує від користувача число n,
// що вказує кількість рівнів (шарів) ялинки.Програма повинна вивести ялинку з n рівнів у вигляді трикутників з зірочок(*).
// Кожен рівень ялинки складається з кількох рядків, 
// де кількість зірочок збільшується від 1 до непарного числа, а також відображається стовбур.

//Додаткові вимоги(Закриваються дві практичні -> 2.3 i 2.4)
//за використання двохвимірного масиву
//за відмальовування ялинки в кольорі
//за додавання в рандомних місцях ялинки іграшок(@, $, %, #)
//за запис ялинки в файл - cristmas_tree.txt
void setRandomColor() {
	int color = 30 + (rand() % 7 + 1);
	cout << "\033[" << color << "m";
}

void resetColor() {
	cout << "\033[0m";
}

int main() {

	ofstream file("./cristmas_tree.txt");
	if (!file.is_open()) {
		cerr << "Unable to open file" << endl;
		return 1;
	}

	srand(static_cast<unsigned int>(time(nullptr)));

	int n;
	cout << "Enter the numbers of Christmas tree levels: ";
	cin >> n;

	char star = '*';
	char toys[] = { '@', '$','&','#' };

	vector<vector<int>>levels(n);

	cout << "Christmas tree" << endl;
	file << "Christmas tree" << endl;

	for (int a = 0; a < n; a++) {
		int rows = 3 + a;
		int ret = n + 3;
		levels[a].resize(rows);

		for (int i = 0; i < rows; i++) {
			levels[a][i] = 1 + (i * 2);

			cout << setw(ret);
			file << setw(ret);
			setRandomColor();
			for (int j = 0; j < levels[a][i]; j++) {
				if (rand() % 5 == 0) {
					cout << toys[rand() % 4];
					file << toys[rand() % 4];
				}
				else {
					cout << star;
					file << star;
				}
			}
			resetColor();
			ret--;
			cout << endl;
			file << endl;
		};
	}

	for (int i = 0; i < 2; i++) {
		cout << setw(n + 2) << star << endl;
		file << setw(n + 2) << star << endl;
	}

	file.close();
	cout << "Christmas tree saved in file 'cristmas_tree.txt'";
	return 0;
}
>>>>>>> 6f97e8203e981497bff2fe7518c8dfcbb46b9d14
