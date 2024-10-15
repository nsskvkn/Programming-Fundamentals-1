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

bool checkStr(const string& txt) {
    if (txt.empty() || txt[0] != '%') {
        return false;
    }

    int idx = 1;

    while (idx < txt.length() && isdigit(txt[idx])) {
        idx++;
    }

    if (idx + 1 < txt.length() && txt[idx] == '~' && txt[idx + 1] == '~') {
        idx += 2;
    } else if (idx + 1 < txt.length() && txt[idx] == '~' && txt[idx + 1] == '%') {
        idx += 2;
    } else {
        return false;
    }

    while (idx < txt.length() && isupper(txt[idx])) {
        idx++;
    }

    if (idx == txt.length() - 1 && txt[idx] == '%') {
        return true;
    }

    return false;
}

int main() {
    string ex[] = {
        "%13~~AC%",
        "%123~%A%",
        "%13~~ABC%",
        "%S~~ABC%"
    };

    for (const auto& e : ex) {
        if (checkStr(e)) {
            cout << e << " belongs to L(V)" << endl;
        } else {
            cout << e << " does NOT belong to L(V)" << endl;
        }
    }

    return 0;
}
