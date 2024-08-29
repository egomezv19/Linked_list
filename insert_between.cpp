#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
// Para lograr obtener el MCD
int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// insertar el nodo between :D

void insertMCD(Node* head) {
    Node* current = head; // apuntando al primer nodo head

    while (current != nullptr && current->next != nullptr) { // hasta que ambos sean nulos 
        // Calculamos el MCD entre el nodo actual y el siguiente
        int gcdValue = mcd(current->data, current->next->data);

        // Creamos un nuevo nodo con el valor del MCD
        Node* newNode = new Node();
        newNode->data = gcdValue;

        // Insertamos el nuevo nodo entre current y current->next
        newNode->next = current->next;  // new node apunta al siguiente nodo
        current->next = newNode;  // current next apunta al new nodo 

        // Avanzamos al siguiente nodo original (saltamos el nodo recién insertado)
        current = newNode->next;
    }
}
