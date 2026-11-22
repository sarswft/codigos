#include <iostream>

// La función recibe dos punteros a enteros
void intercambiarSinAuxiliar(int *a, int *b) {
    // Verificamos que no apunten a la misma dirección para evitar errores lógicos
    if (a == b) return; 

    
    *a = *a + *b; // 1. *a acumula la suma de ambos
    *b = *a - *b; // 2. *b se queda con el valor original de *a
    *a = *a - *b; // 3. *a se queda con el valor original de *b
}

int main() {
    int x = 5;
    int y = 10;

    std::cout << "Antes del intercambio: x = " << x << ", y = " << y << std::endl;

    // Llamamos a la función enviando las DIRECCIONES de memoria con el (&)
    intercambiarSinAuxiliar(&x, &y);

    std::cout << "Despues del intercambio: x = " << x << ", y = " << y << std::endl;

    return 0;
}