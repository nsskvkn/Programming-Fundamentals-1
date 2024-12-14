<<<<<<< HEAD
/*
Done by:
    Student: Yaroslav Yavon
    Group: 123:1
     Lab 1.8
*/
// 1. Перевірка парності числа
#include <iostream>
#include <cmath>
using namespace std;

int main() {
        setlocale(LC_ALL, "RU");

    int num;
    cout << "Введите целое число:";
    cin >> num;
    bool iE = num % 2 == 0;
    if (iE)
        cout << "Число " << num << " парне\n" << endl;
    else
        cout << "Число " << num << " непарне\n" << endl;

    return 0;
}

//2. Підрахунок кількості одиничних бітів


int main() {
    setlocale(LC_ALL, "RU");

    int ones = 0,
        n;
   cout << "Введите целое число:";
    cin >> n;
    for(int i = 0; i < sizeof(int) * 8; i++) {
        int mask = 1 << i;
        if((n & mask) != 0) ones++;
    }
    cout << "Число " << n << " має " << ones << " 1 бит\n" << endl;
    return 0;
}

//3. Перевірка встановленого біта на певній позиції

int main() {
    setlocale(LC_ALL, "RU");

    int n,r;
    cout << "Введите целое число: ";
    cin >> n;
    cout << "Введите положение бита:";
    cin >> r;
    if(r < 0) {
        cout << "Бит постион до нуля\n";
        return 0;
    }
    int bitAtPos = (n & (1 << r)) == 0 ? 0 : 1;
    cout << "Біт " << bitAtPos << " пастион " << r << "\n" << endl;
}
=======
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int el : numbers) {
        // numbers[i]
        // if (el % 2 == 0) {
        //     std::cout << el << " is even" << std::endl;
        // } else {
        //     std::cout << el << " is odd" << std::endl;
        // }
    }
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    {
        int   a = 66;
        float b = 12.9;
        int   c = 62;
        int   d = 59;

     
        //  empty (! (A != B) && (< (C < D)))
        bool res = (!(a != b) &&  (  <(c < d)));
        cout << "res: " << boolalpha << res << endl;
    }

    {
        int a = 0;

        bool res = !a;
        cout << "res: " << boolalpha << res << endl;
    }

    return 0;


}
>>>>>>> 6f97e8203e981497bff2fe7518c8dfcbb46b9d14
