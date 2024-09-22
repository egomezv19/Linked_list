class MinStack {  // Definimos la clase MinStack.
public:
    MinStack() {  // Constructor por defecto, que no hace nada especial.
        
    }
    
    vector<int> result;  // Declaramos un vector de enteros llamado 'result' que será nuestra pila.
    
    void push(int val) {  // Función para agregar un valor 'val' a la pila.
        result.push_back(val);  // Añadimos el valor al final del vector.
    }
    
    void pop() {  // Función para eliminar el elemento superior de la pila.
        result.pop_back();  // Eliminamos el último elemento del vector (la cima de la pila).
    }
    
    int top() {  // Función para obtener el valor superior (cima) de la pila.
        return result[result.size() - 1];  // Devolvemos el último elemento del vector (el tope).
    }
    
    int getMin() {  // Función para obtener el valor mínimo de la pila.
        int min_val = *min_element(result.begin(), result.end());  // Usamos la función min_element para encontrar el mínimo en el rango del vector.
        return min_val;  // Devolvemos el valor mínimo encontrado.
    }
};
