
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 

class Solution {             // Definición de una clase llamada Solution que contendrá la solución al problema.
public:
    ListNode* swapPairs(ListNode* head) {   // Método público que toma un puntero al primer nodo de la lista enlazada y devuelve un puntero al primer nodo de la lista modificada.
        if (!head || !head->next) return head;  // Si la lista está vacía (head es nullptr) o tiene solo un nodo, regresa la cabeza (no hay nada que intercambiar).

        ListNode dummy(0);           // Se crea un nodo 'dummy' (ficticio) con valor 0. Este nodo ayudará a simplificar el manejo de punteros.
        ListNode* tail = &dummy;     // Se crea un puntero tail que apunta al nodo 'dummy'. Este puntero seguirá la última posición de la lista construida.
        ListNode* curr = head;       // Se crea un puntero curr que apunta al nodo actual, comenzando desde la cabeza de la lista.

        while (curr && curr->next) {    // Mientras el nodo actual y el siguiente nodo existan, entra en el bucle.
            ListNode* temp = curr->next->next;   // Guarda el puntero al nodo después del siguiente nodo, que es la pareja que vamos a intercambiar.

            tail->next = curr->next;     // Conecta el nodo siguiente de 'curr' (el segundo en la pareja) al nodo que sigue a 'tail'.
            curr->next->next = curr;     // Conecta el siguiente nodo de 'curr' a 'curr' mismo, intercambiando los nodos.
            curr->next = temp;           // Reconecta 'curr' al siguiente nodo después de la pareja.

            tail = curr;                 // Mueve el puntero tail a curr (que es ahora el segundo nodo en la pareja).
            curr = temp;                 // Mueve el puntero curr a temp para continuar con la siguiente pareja en la lista.
        }

        return dummy.next;               // Devuelve la nueva cabeza de la lista, que es el siguiente nodo del 'dummy'.
    }
};
