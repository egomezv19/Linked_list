#include <vector>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution{
    public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        ListNode* l3 = new ListNode(0); // nueva lista donde se va a almacenar inicia en 0
        int carry = 0;
        ListNode* head; // esto nos retornara el head, no te tail como l3 normal: Head pointer
        while(l1 && l2){
            int value = l1 -> val + l2->val + carry; // tomamos el valor de l1, el valor de l2 y el carry que es lo que sobra de la suma
            carry = value/10; // 16/10 = 1
            l3->next = new ListNode(value%10);
            l3 = l3 ->next;
            l2 = l2 ->next;
            l1 = l1 ->next;
        }
        while (l1){ // en el caso que l1 sea mas grande en length que l2
            int value = l1 ->val + carry; 
            carry = value/10; 
            l3->next = new ListNode(value%10);
            l3 = l3 ->next;
            l1 = l1 ->next;
        }
        while (l2){ // en el caso que l2 sea mas grande en length que l1
            int value = l2->val + carry; 
            carry = value/10; 
            l3->next = new ListNode(value%10);
            l3 = l3 ->next;
            l1 = l1 ->next;
        }
        if (carry){
            l3 -> next = new ListNode(carry);

        }
        return  head ->next;
    };
};