#include <vector>
using namespace std;
class Solution {
    public:
    int removeDuplicates(vector<int>& nums){ // acepta un vector por referencia para poder cambiar los valores en el vector original 
        int i = 1; // empezamos en 1 porque el vector empieza en vector[0]
        int j = 1;
        if (nums.size() == 0) return 0; 
        for (i=1; i<nums.size();i++){ // comenzamos el primer bucle 
            if (nums[i] != nums[j]){ // si el valor de i es distinto de j. nums[0] por ejemplo al comienzo
                nums[j] = nums[i]; // si el valor es distinto, significa que encontramos un nuevo int y colocamos ese nuevo int en j para seguir iterando
                j++;
            }
        }
        return j; // retornamos el numero de elementos unicos en el vector :D
    }
};