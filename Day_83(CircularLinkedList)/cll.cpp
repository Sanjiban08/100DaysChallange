// C++ code to perform circular linked list operations. ----

#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node* next;
};
struct Node* addToEmpty(struct Node* last, int data) {
    if (last != NULL) return last;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    last = newNode;
    last->next = last;
    return last;
}
struct Node* addFront(struct Node* last, int data) {
    if (last == NULL) return addToEmpty(last, data);
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = last->next;
    last->next = newNode;
    return last;
}
struct Node* addEnd(struct Node* last, int data) {
    if (last == NULL) return addToEmpty(last, data);
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = last->next;
    last->next = newNode;
    last = newNode;
    return last;
}
struct Node* addAfter(struct Node* last, int data, int item) {
    if (last == NULL) return NULL;
    struct Node *newNode, *p;
    p = last->next;
    do {
        if (p->data == item) {
            newNode = (struct Node*)malloc(sizeof(struct Node));
            newNode->data = data;
            newNode->next = p->next;
            p->next = newNode;
            if (p == last) last = newNode;
            return last;
        }
        p = p->next;
    } while (p != last->next);
    cout << "\nThe given node is not present in the list" << endl;
    return last;
}
void deleteNode(Node** last, int key) {
    if (*last == NULL) return;
    if ((*last)->data == key && (*last)->next == *last) {
        free(*last);
        *last = NULL;
        return;
    }
    Node *temp = *last, *d;
    if ((*last)->data == key) {
        while (temp->next != *last) temp = temp->next;
        temp->next = (*last)->next;
        free(*last);
        *last = temp->next;
    }
    while (temp->next != *last && temp->next->data != key) {
        temp = temp->next;
    }
    if (temp->next->data == key) {
        d = temp->next;
        temp->next = d->next;
        free(d);
    }
}
void traverse(struct Node* last) {
    struct Node* p;
    if (last == NULL) {
        cout << "The list is empty" << endl;
        return;
    }
    p = last->next;
    do {
        cout << p->data << " ";
        p = p->next;
    } while (p != last->next);
}
int main() {
    struct Node* last = NULL;
    last = addToEmpty(last, 6);
    last = addEnd(last, 8);
    last = addFront(last, 2);
    last = addAfter(last, 10, 2);
    traverse(last);
    deleteNode(&last, 8);
    cout << endl;
    traverse(last);
    return 0;
}
