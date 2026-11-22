#include <iostream>

// definir la struct Numero
struct Numero {
    int valor;
};

// La función recibe un puntero al arreglo de structs y retorna un puntero (Numero*)
Numero* encontrarMayor(Numero *arr, int tam) {
    if (tam <= 0) return nullptr; // Seguridad por si el arreglo está vacío

    // se asume inicialmente que el primer elemento es el mayor
    Numero *ptrMayor = arr; 

    for (int i = 1; i < tam; i++) {
        // se compara el valor actual del arreglo con el valor del mayor que llevamos
        // (arr + i)->valor es equivalente a arr[i].valor usando punteros
        if ((arr + i)->valor > ptrMayor->valor) {
            ptrMayor = (arr + i); // Actualizar el puntero al nuevo mayor
        }
    }

    // Retornar la dirección de memoria de la estructura que tiene el mayor valor
    return ptrMayor; 
}

int main() {
    int tam = 5;
    Numero arreglo[5] = {12, 45, 78, 23, 56};

    // Llamamos a la función; se guarda el resultado en un puntero
    Numero *resultado = encontrarMayor(arreglo, tam);

    // Mostrar el resultado usando el puntero devuelto
    if (resultado != nullptr) {
        std::cout << "El valor mas grande encontrado es: " << resultado->valor << std::endl;
    }

    return 0;
}