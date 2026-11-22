#include <iostream>

// Declaración de la función que recibe el saldo como puntero y la cantidad
void depositar(double *saldo, double cantidad) {
    //(*) para desreferenciar y modificar el valor original
    *saldo += cantidad; 
}

int main() {
    double saldoActual = 100.0; // Saldo inicial de prueba

    std::cout << "Saldo inicial: $" << saldoActual << std::endl;

    double cantidadDeposito;
    std::cout << "Ingrese la cantidad a depositar: ";
    std::cin >> cantidadDeposito;

    // Llama a la función enviando la DIRECCIÓN de memoria del saldo con el operador de dirección (&)
    depositar(&saldoActual, cantidadDeposito);

    // Muestra el saldo actualizado
    std::cout << "Saldo actualizado: $" << saldoActual << std::endl;

    return 0;
}