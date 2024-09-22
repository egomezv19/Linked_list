#include <vector>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) { // head es el puntero y nums es el subconjunto que contiene numros
        sort(nums.begin(), nums.end());// Ordenar el vector nums para usar búsqueda binaria
        int count = 0; 
        bool inComponent = false; // para verificar que estamos en una componente conectada 
        
        while (head != nullptr) {
            // Usar búsqueda binaria para ver si el valor está en nums
            if (binary_search(nums.begin(), nums.end(), head->val)) {
                // Si encontramos el valor en nums
                if (!inComponent) {
                    count++;  // Iniciar una nueva componente conectada
                    inComponent = true;
                }
            } else {
                // Si el valor no está en nums, terminamos la componente actual
                inComponent = false;
            }
            head = head->next;  // Avanzar al siguiente nodo
        }

        return count;
    }
};
