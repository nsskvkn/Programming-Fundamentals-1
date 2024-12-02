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
    if (txt.empty()) {
        return false; 
    }

    if (txt[0] != '%') {
        return false;
    }

    int b = 1; 

    while (b < txt.size() && isdigit(txt[b])) {
        b++;
    }

    if (b + 1 < txt.size() && txt[b] == '~') {
        if (txt[b + 1] == '~' || txt[b + 1] == '%') {
            b += 2;
        } else {
            return false;
        }
    } else {
        return false;
    }

    while (b < txt.size() && isupper(txt[b])) {
        b++;
    }

    return b == txt.size() - 1 && txt[b] == '%';
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
            cout << e << " Це належить L(V)" << endl;
        } else {
            cout << e << " Це не належить L(V)" << endl;
        }
    }

    return 0;
}
