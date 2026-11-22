#include <iostream>

// se define la struct Cuenta
struct Cuenta {
    double saldo;
};

// La función recibe la cuenta por referencia (&) y el monto
void retirar(Cuenta &c, double monto) {
    // Verificar si existe saldo suficiente
    if (c.saldo >= monto) {
        c.saldo -= monto; // se resta el monto directamente al saldo original
        std::cout << "Retiro exitoso. Saldo restante: $" << c.saldo << std::endl;
    } else {
        std::cout << "Fondos insuficientes. No se pudo realizar el retiro." << std::endl;
    }
}

int main() {
    
    Cuenta miCuenta = {200.0};

    std::cout << "Saldo inicial: $" << miCuenta.saldo << std::endl;

    double montoRetiro;
    std::cout << "Ingrese la cantidad a retirar: ";
    std::cin >> montoRetiro;

    // Llama a la función pasando la cuenta directamente (por referencia)
    retirar(miCuenta, montoRetiro);

    // Verificacion que el saldo en el main SÍ se actualizó
    std::cout << "Saldo final en la cuenta: $" << miCuenta.saldo << std::endl;

    return 0;
}