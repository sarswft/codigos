#include <iostream>

void fIntercambioArreglo(int *inicio, int tamano);



int main()
{
    int tam = 5;
    int arreglo[5] = {10, 20, 30, 40, 50};

    std::cout << "Original: ";
    for(int i = 0; i < tam; i++) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;

    // se llama a la función enviando el arreglo
    fIntercambioArreglo(arreglo, tam);

    std::cout << "Invertido: ";
    for(int i = 0; i < tam; i++) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

void fIntercambioArreglo(int *inicio, int tamano)
{
    // Define dos punteros: uno al inicio y otro al final del arreglo
    int *izq = inicio;              // Apunta al primer elemento
    int *der = inicio + tamano - 1; // Apunta al último elemento
    // Mientras el puntero izquierdo no cruce al derecho
    while (izq < der)
    {
        // Guardar temporalmente el valor de la izquierda para no perderlo
        int aux = *izq;

        // Pasar el valor de la derecha hacia la izquierda
        *izq = *der;

        // Pasar el valor guardado (aux) hacia la derecha
        *der = aux;

        // se mueven los punteros hacia el centro
        izq++; // Avanza a la derecha
        der--; // Retrocede a la izquierda
    }
}
