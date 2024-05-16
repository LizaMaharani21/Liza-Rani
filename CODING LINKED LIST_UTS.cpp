#include <iostream>

// Definisi Node
struct Node {
    int data;
    Node* next;
};

// Fungsi menambahkan node di awal linked list
void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

// Fungsi mencetak isi linked list
void printList(Node* node) {
    while (node != NULL) {
        std::cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    Node* head = NULL;

    push(&head, 9);
    push(&head, 6);
    push(&head, 12);

    std::cout << "Linked list: ";
    printList(head);

    return 0;
}
