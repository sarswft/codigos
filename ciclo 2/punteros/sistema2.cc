#include <iostream>
#include <fstream> // Librería necesaria para leer y escribir archivos

void depositar(double *saldo, double cantidad) {
    *saldo += cantidad; 
}

int main() {
    double saldoActual = 0.0;
    std::string nombreArchivo = "saldo.txt";

    // LEER EL SALDO GUARDADO ANTERIORMENTE
    std::ifstream archivoLectura(nombreArchivo);
    if (archivoLectura.is_open()) {
        archivoLectura >> saldoActual; // Si el archivo existe, lee el saldo que tenía
        archivoLectura.close();
        std::cout << "Saldo cargado desde el archivo. ";
    } else {
        std::cout << "No se encontró archivo previo. Iniciando con saldo en 0. ";
        saldoActual = 100.0; // O un saldo inicial por defecto si lo deseas
    }

    std::cout << "Saldo actual: $" << saldoActual << std::endl;

    double cantidadDeposito;
    std::cout << "Ingrese la cantidad a depositar: ";
    std::cin >> cantidadDeposito;

    // Modificar el saldo usando el puntero
    depositar(&saldoActual, cantidadDeposito);

    std::cout << "Nuevo saldo actualizado: $" << saldoActual << std::endl;

    //GUARDAR EL NUEVO SALDO EN EL ARCHIVO ANTES DE SALIR
    std::ofstream archivoEscritura(nombreArchivo);
    if (archivoEscritura.is_open()) {
        archivoEscritura << saldoActual; // Sobrescribe el archivo con el saldo final
        archivoEscritura.close();
        std::cout << "¡Saldo guardado exitosamente en el archivo!" << std::endl;
    } else {
        std::cout << "Error al intentar guardar el archivo." << std::endl;
    }

    return 0;
}