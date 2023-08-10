
#include "unit_tests/linked_list_utils.h"
#include "FindPriorNode.h"

Node* FindPriorNode(Node *head, int value) {
    Node *curr = head;
    Node *prev = nullptr;

    while (curr != nullptr) {
        if (curr->value == value) {
            return prev;
        }
        prev = curr;
        curr = curr->next;
    }

    return nullptr;
}