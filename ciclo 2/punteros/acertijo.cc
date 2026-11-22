#include <iostream>

// La función recibe tres punteros a enteros
void resolverAcertijo(int *a, int *b, int *c) {
    // Guardar los valores originales en variables temporales 
    // para no perderlos al momento de empezar a modificar los punteros.
    int val1 = *a;
    int val2 = *b;
    int val3 = *c;

    // Encontrar el mayor entre los tres valores respaldados
    int mayor = val1;
    if (val2 > mayor) mayor = val2;
    if (val3 > mayor) mayor = val3;

    // Encontrar el menor entre los tres valores respaldados
    int menor = val1;
    if (val2 < menor) menor = val2;
    if (val3 < menor) menor = val3;

    // Modificar los valores originales a través de los punteros
    *a = mayor;         // El primer número recibe el mayor
    *b = menor;         // El segundo número recibe el menor
    *c = mayor - menor; // El tercero recibe la diferencia
}

int main() {
    int x = 15, y = 42, z = 7;

    std::cout << "Valores iniciales: x = " << x << ", y = " << y << ", z = " << z << std::endl;

    // Llamamos a la función enviando las DIRECCIONES de memoria con &
    resolverAcertijo(&x, &y, &z);

    std::cout << "\nDespues del acertijo:" << std::endl;
    std::cout << "Primer numero (Mayor): " << x << std::endl;
    std::cout << "Segundo numero (Menor): " << y << std::endl;
    std::cout << "Tercer numero (Diferencia): " << z << std::endl;

    return 0;
}