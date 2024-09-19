/**
 * Done by:
 * Student Name: Yavon Yaroslav
 * Student Group: 123
 * Lab 1.5
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    {
        int a = 6;
        int b = 2;
        int c = 7;
        int d = 14;

        // <УЛО1> (<УЛО2> (A<ОВ1>B) <БЛО> (<УЛО3> (C<ОВ2>D)))
        //  empty (  !    (a == b)    ^   (   !   (c != d)))
        bool res = (!(a == b) ^ (!(c != d)));
        cout << "res: " << boolalpha << res << endl;
    }

    {
        int a = 7;
        int b = 7;
        int c = 24;
        int d = 1;

        // <УЛО1> (<УЛО2> (A<ОВ1>B) <БЛО> (<УЛО3> (C<ОВ2>D)))
        //  empty (  !    (a != b)    and   (   !   (c .< d)))
        bool res = (!(a == b) && (!(c != d)));
        cout << "res: " << boolalpha << res << endl;
    }

    return 0;
}