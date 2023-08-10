#include "unit_tests/linked_list_utils.h"
#include "FindPriorNode.h"
#include "DeleteNode.h"
#include <iostream>
using namespace std;


//
//Node* FindPriorNode(Node *head, int value) {
//    Node *curr = head;
//    Node *prev = nullptr;
//
//    while (curr != nullptr) {
//        if (curr->value == value) {
//            return prev;
//        }
//        prev = curr;
//        curr = curr->next;
//    }
//
//    return nullptr;
//}
//
//void DeleteNode(Node*& head, int value) {
//
//    if (head->value == value) {
//        Node* tmp = head;
//        head = head->next;
//        delete tmp;
//        return;
//    }
//
//    Node *prior = FindPriorNode(head, value);
//    if (prior != nullptr) {
//        Node* tmp = prior->next;
//        prior->next = prior->next->next;
//        delete tmp;
//    }
//}

int main() {

    int array[6] = {5, 8, 21, 3, 4, 3};

    Node *head = arrayToLinkList(array, 6);

    PrintLinkList(head);
    DeleteNode(head, 21);
    PrintLinkList(head);

    DeleteNode(head, 5);
    PrintLinkList(head);

    return 0;
}