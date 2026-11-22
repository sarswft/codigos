#include <iostream>

// Definir la estructura Producto
struct Producto {
    double precio;
    int cantidad;
};

// La función recibe un puntero al producto y un límite
double calcularYModificarPrecio(Producto *prod, int limite) {
    // Si la cantidad supera el límite, se modifica el precio original (ej. un 10% de descuento por mayoreo)
    if (prod->cantidad > limite) {
        prod->precio = prod->precio * 0.90; // Modifica el precio original directamente
    }
    
    // Retornar el precio total (precio por cantidad)
    return prod->precio * prod->cantidad;
}

int main() {
    // Crea un producto con cantidad 15 (supera el límite de 10)
    Producto item = {50.0, 15};

    std::cout << "Precio unitario inicial: $" << item.precio << std::endl;
    std::cout << "Cantidad: " << item.cantidad << std::endl;

    // se llama a la función pasando la DIRECCIÓN del producto (&)
    double totalPagar = calcularYModificarPrecio(&item, 10);

    // Verificacion que el precio original en el main SÍ fue modificado gracias al puntero
    std::cout << "\n--- Despues de la funcion ---\n";
    std::cout << "Nuevo precio unitario (modificado): $" << item.precio << std::endl;
    std::cout << "Precio total a pagar: $" << totalPagar << std::endl;

    return 0;
}