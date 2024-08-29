#include <iostream>

using namespace std;
struct ListNode {
    int val;         // Valor que almacenará el nodo
    ListNode* next;  // Puntero al siguiente nodo

    // Constructor por defecto
    //ListNode() : val(0), next(nullptr) {}

    // Constructor con valor inicial
    ListNode(int x) : val(x), next(nullptr) {}

    // Constructor con valor inicial y siguiente nodo
    //ListNode(int x, ListNode* next) : val(x), next(next) {}
};
/*
-cur(currently) and next are nodos 

(next) -> null
(head)(cur) 4->8->9->15->NULL
prev ->null
// en teoria queremos iterar cur 
15->9->8->4

a)
(cur)4->(next)8->9->15->null
(cur)4-> (prev)NULL(next)8->9->15->null
(cur)(prev)4->NULL(next)8->9->15->NULL
(prev)4->null(cur)(next)8->13->21->NULL

*/

class Solution {
    public:
    //funcion que nos retornara la lista al reves :D
    ListNode* reverseList(ListNode* head){
        ListNode *cur =head;
        ListNode *next = NULL;
        ListNode *prev = NULL;

        while (cur != NULL){ // mirar el ejemplo a 
            next = cur->next; // next apunta al siguiente valor/nodo
            cur->next = prev; // cur apunta a next y se guarde en prev
            prev = cur; // prev toma la posicion de cur 
            cur = next; // cur termine apuntado al que fue el nodo next 

        }
        head = prev;
        return head;

    }
};