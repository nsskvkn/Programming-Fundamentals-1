/*
Done by:
    Student: Yaroslav Yavon
    Group: 123:1
     Lab 2.1
*/
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

inline void addFront(Node** h, int v) {
    *h = new Node{v, *h};
}

inline void removeFront(Node** h) {
    if (*h) {
        Node* t = *h;
        *h = (*h)->next;
        delete t;
    }
}

inline void print(Node* h) {
    while (h) {
        cout << h->data << " ";
        h = h->next;
    }
    cout << endl;
}

inline void addEnd(Node** h, int v) {
    Node* n = new Node{v, nullptr};
    if (!*h) *h = n;
    else {
        Node* c = *h;
        while (c->next) c = c->next;
        c->next = n;
    }
}

inline void removeEnd(Node** h) {
    if (!*h) return;
    if (!(*h)->next) delete *h, *h = nullptr;
    else {
        Node* c = *h;
        while (c->next->next) c = c->next;
        delete c->next;
        c->next = nullptr;
    }
}

inline Node* search(Node* h, int v) {
    while (h && h->data != v) h = h->next;
    return h;
}

inline void reverse(Node** h) {
    Node* p = nullptr, *c = *h, *n;
    while (c) n = c->next, c->next = p, p = c, c = n;
    *h = p;
}

inline void sort(Node* h) {
    if (!h) return;
    bool s;
    Node* l = nullptr;
    do {
        s = false;
        for (Node* p = h; p->next != l; p = p->next) {
            if (p->data > p->next->data) swap(p->data, p->next->data), s = true;
        }
        l = h;
    } while (s);
}

inline void clear(Node** h) {
    while (*h) removeFront(h);
}

int main() {
    Node* h = nullptr;
    addFront(&h, 10); addFront(&h, 20); addFront(&h, 30); addEnd(&h, 5);
    print(h);

    removeFront(&h); print(h);
    removeEnd(&h); print(h);

    cout << (search(h, 10) ? "Found\n" : "Not Found\n");

    reverse(&h); print(h);

    sort(h); print(h);

    clear(&h);
    return 0;
}
