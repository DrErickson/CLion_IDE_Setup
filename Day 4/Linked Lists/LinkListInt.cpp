
#include "LinkListInt.h"

LinkListInt::LinkListInt() {
    size = 0;
    head = nullptr;
}

LinkListInt::~LinkListInt() {
    while (head != nullptr) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }
}

void LinkListInt::Add(int value) {
    Node* newNode = new Node;
    newNode->next = nullptr;
    newNode->value = value;
    size++;

    if (head == nullptr) {
        head = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
}

void LinkListInt::Remove(int value) {
    Node* prev = nullptr;
    Node* curr = head;

    while (curr != nullptr) {
        if (curr->value == value) {
            break;
        }
        prev = curr;
        curr = curr->next;
    }

    if (curr == head) {
        head = head->next;
        delete curr;
        size--;
    }
    else if (curr != nullptr){
        prev->next = curr->next;
        delete curr;
        size--;
    }

}

bool LinkListInt::Contains(int value) {
    Node* curr = head;

    while (curr != nullptr) {
        if (curr->value == value) {
            return true;
        }
        curr = curr->next;
    }

    return false;
}

int LinkListInt::Size() {
    return size;
}

string LinkListInt::ToString() {
    string result = "head->";
    Node* curr = head;

    while (curr != nullptr) {
        result += to_string(curr->value) + "->";
        curr = curr->next;
    }

    result += "nullptr";

    return result;
}
