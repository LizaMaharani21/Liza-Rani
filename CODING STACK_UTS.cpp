#include <iostream>

// Node menyimpan data dan pointer ke node selanjutnya
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

// Kelas Stack menggunakan linked list
class Stack {
private:
    Node* top;
    int size;

public:
    Stack() : top(NULL), size(0) {}

    // Menambah elemen ke stack
    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
        size++;
        std::cout << data << " pushed to stack\n";
    }

    // Menghapus elemen dari stack
    void pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        std::cout << temp->data << " popped from stack\n";
        delete temp;
        size--;
    }

    // Melihat elemen teratas stack
    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    // Memeriksa apakah stack kosong
    bool isEmpty() {
        return top == NULL;
    }

    // Mengembalikan jumlah elemen dalam stack
    int getSize() {
        return size;
    }

    // Menampilkan seluruh elemen dalam stack
    void display() {
        Node* current = top;
        std::cout << "Stack: ";
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Stack stack;

    stack.push(47);
    stack.push(29);
    stack.push(30);

    stack.display();
    std::cout << "Size of stack: " << stack.getSize() << std::endl;

    stack.pop();
    stack.pop();

    stack.display();
    std::cout << "Top of the stack: " << stack.peek() << std::endl;

    return 0;
}
