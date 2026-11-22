#include <iostream>
#include <string>

// definicion de la struct Producto
struct Producto {
    std::string nombre;
    double precio;
};

// La función recibe un puntero al arreglo de productos y retorna un puntero (Producto*)
Producto* encontrarProductoMasCaro(Producto *arr, int tam) {
    if (tam <= 0) return nullptr; // Validación por seguridad

    // Asumiendo inicialmente que el primer producto es el más caro
    Producto *ptrMasCaro = arr;

    for (int i = 1; i < tam; i++) {
        // Usa la flecha (arr + i)->precio para acceder al precio del elemento actual
        if ((arr + i)->precio > ptrMasCaro->precio) {
            ptrMasCaro = (arr + i); // Actualizamos la dirección del más caro
        }
    }

    // Retorna la dirección exacta del producto más caro
    return ptrMasCaro;
}

int main() {
    int tam = 4;
    Producto inventario[4] = {
        {"Laptop", 850.50},
        {"Mouse", 25.00},
        {"Teclado", 45.00},
        {"Monitor", 300.00}
    };

    // manda a llamar a la función y guardamos el resultado en un puntero a Producto
    Producto *resultado = encontrarProductoMasCaro(inventario, tam);

    // Mostrar los datos desde el main usando el puntero devuelto y la flecha (->)
    if (resultado != nullptr) {
        std::cout << "El producto mas caro es " << resultado->nombre 
                  << " con un precio de $" << resultado->precio << std::endl;
    }

    return 0;
}