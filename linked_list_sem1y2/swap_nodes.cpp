// definicion de una estructura de leet code 
struct ListNode {
    int val; // tenemos al valor entero que representa el dato almacenado
    ListNode *next; // puntero que apunta al siguietne nodo de la lista

    //Constructo por defecto:
    ListNode () : val(0), next(nullptr){} //inicializa el nodo con valor cero y el puntero next con nullptr

    //Constructor que inicializa el nodo con un valor entero "x" y le asigna nullptr al puntero next
    ListNode(int x) : val(x), next(nullptr){}

    //Constructor que inicializa el nodo con un valor entero "x" y conecta el nodo a otro nodo a traves de "next"
    ListNode(int x, ListNode *next):val(x), next(next){}
};
/* TEORIA

Cada nodo tiene un puntero llamado (ListNode *next) que señala al siguiente de la lista, si señaal a un nullptr es que ya es el ultimo nodo.
Las flechas se usan para -> acceder a los miembros de un objeto que apuntan a un puntero.
Ejem: (head->next), head es un puntero a un nodo y "->next" accede al miembro de ese nodo.


*/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head; // verificia si head es nullptr o head->next  es nullptr

        ListNode dummy(0); // es un nodo ficticio, se crea con valor cero y su puntero next siempre es nullptr
        ListNode* tail = &dummy; // apunta al nodo dummy y se ira moviendo  a medida que se construya la lista. Se usa &dummy porque apunta a la direccion de memoria de la variable dummy 
        ListNode* curr = head; //apunta al primer nodo de la lista, head en este caso      

        while (curr && curr->next) { //siempre que existan dos nodos para comparar, nodo actual y nodo siguiente curr->next
            ListNode* temp = curr->next->next;  //creamos un puntero temp que almacena el nodo siguiente de los dos nodos que vamos a intercambiar
            tail->next = curr->next; //
            curr->next->next = curr;
            curr->next = temp;

            tail = curr;
            curr = temp;
        }

        return dummy.next;
    }
};