#include <iostream>

// La función recibe un puntero al inicio del arreglo y su tamaño
void reemplazarNegativos(int *ptr, int tam) {
    for (int i = 0; i < tam; i++) {
        //  *(ptr + i) para acercarse a cada casilla y verificar si es negativo
        if (*(ptr + i) < 0) {
            *(ptr + i) = 0; // Reemplaza el valor original por 0 directamente
        }
    }
}

int main() {
    int tam = 5;
    int numeros[5] = {12, -4, 7, -15, 0};

    std::cout << "Arreglo original: ";
    for(int i = 0; i < tam; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    // se llama a la función pasando el arreglo (que actúa como puntero) y su tamaño
    reemplazarNegativos(numeros, tam);

    std::cout << "Arreglo modificado (sin negativos): ";
    for(int i = 0; i < tam; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}