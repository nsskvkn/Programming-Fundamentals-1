/*
Done by:
    Student: Yaroslav Yavon
    Group: 123:1
     Lab 2.1
*/
#include <iostream>
using namespace std;

struct Node {

    char data;
    Node* next;
};

void addToBeginning(Node*& head, char value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

Node* createFirstList(int count) {
    Node* head = nullptr;
    for (int i = 0; i < count; i++) {
        char val;
        cout << "Enter the symbol for the item " << i++ << ": ";
        cin >> val;
        addToBeginning(head, val);
    }
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n = 10;
    cout << "Here we will create a list where it will be " << n << " elements.\n";
    Node* myList = createFirstList(n);

    cout << "\nHere's what we got: ";
    printList(myList);

    Node* delPtr;
    while (myList != nullptr) {
        delPtr = myList;
        myList = myList->next;
        delete delPtr;
    }

    return 0;
}
