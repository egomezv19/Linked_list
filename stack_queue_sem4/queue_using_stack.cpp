class MyStack {
public:
    queue<int> q;       // Declaramos una cola 'q' para simular la pila.
    MyStack() {         // Constructor vacío, no hace nada en este caso.
    }
    
    void push(int x) {  // Función para agregar un elemento 'x' a la "pila".
        if (q.empty())  // Si la cola está vacía:
            q.push(x);  // Simplemente agregamos el elemento 'x' a la cola.
        else {          
            int s = q.size();  // Si no está vacía, guardamos el tamaño de la cola.
            q.push(x);  // Agregamos el nuevo elemento 'x' al final de la cola.
            while (s--) {      // Reorganizamos los elementos:
                int top = q.front();  // Tomamos el primer elemento de la cola.
                q.pop();  // Lo eliminamos del frente de la cola.
                q.push(top);  // Lo volvemos a insertar al final de la cola.
            }
        }
    }
    
    int pop() {  // Función para eliminar el elemento superior de la "pila".
        int top = q.front();  // Guardamos el primer elemento (que simula ser el tope de la pila).
        q.pop();  // Eliminamos ese primer elemento.
        return top;  // Devolvemos el valor eliminado.
    }
    
    int top() {  // Función para ver el valor del elemento en la cima de la "pila".
        return q.front();  // Simplemente devolvemos el primer elemento de la cola.
    }
    
    bool empty() {  // Función que verifica si la "pila" está vacía.
        return q.empty();  // Devuelve true si la cola está vacía, false en caso contrario.
    }
};
