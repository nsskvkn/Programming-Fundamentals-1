/*
Done by:
    Student: Yaroslav Yavon
    Group: 123:1
     RGR 
    
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool e(string b) { 
    return b.empty();
}

bool a(string b) { 
    if (e(b)) {
        return false; 
    }

    if (b[0] != '%') {
        return false;
    }

    int c = 1; 

    while (c < b.size() && isdigit(b[c])) {
        c++;
    }

    if (c + 1 < b.size() && b[c] == '~') {
        if (b[c + 1] == '~' || b[c + 1] == '%') {
            c += 2;
        } else {
            return false;
        }
    } else {
        return false;
    }

    while (c < b.size() && isupper(b[c])) {
        c++;
    }

    return c == b.size() - 1 && b[c] == '%';
}

int main() {
    string d[] = { "%13~~AC%", "%123~%A%", "%13~~ABC%", "%S~~ABC%"};

    for (const auto& e : d) {
        if (a(e)) {
            cout << e << " Це належить L(V)" << endl;
        } else {
            cout << e << " Це не належить L(V)" << endl;
        }
    }

    return 0;
}
