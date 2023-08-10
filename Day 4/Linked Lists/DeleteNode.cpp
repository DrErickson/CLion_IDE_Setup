#include "unit_tests/linked_list_utils.h"
#include "DeleteNode.h"
#include "FindPriorNode.h"


void DeleteNode(Node*& head, int value) {

    if (head->value == value) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
        return;
    }

    Node *prior = FindPriorNode(head, value);
    if (prior != nullptr) {
        Node* tmp = prior->next;
        prior->next = prior->next->next;
        delete tmp;
    }
}