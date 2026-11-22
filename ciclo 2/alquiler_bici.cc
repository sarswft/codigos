#include <iostream>
#include <random>
#include <string>

// Prototipos
void SolicitarDatos();
void CalcularCosto();
int GeneradorRandom();
void DeterminarDescuento();
void GenerarFactura();

// Variables globales
const int TAM = 5;

double horas[TAM];
double precio = 3.0;
double total = 0.0;
double descuento = 0.0;
double subtotal = 0.0;

std::string nombre;

int main()
{
    SolicitarDatos();
    CalcularCosto();
    DeterminarDescuento();
    GenerarFactura();

    return 0;
}

void SolicitarDatos()
{
    std::cout << "Ingrese su nombre completo: ";
    getline(std::cin, nombre);

    for (int i = 0; i < TAM; i++)
    {
        std::cout << "Ingrese las horas de alquiler #" << i + 1 << ": ";
        std::cin >> horas[i];
    }
}

void CalcularCosto()
{
    total = 0.0;

    for (int i = 0; i < TAM; i++)
    {
        total += horas[i];
    }

    total *= precio;
}

int GeneradorRandom()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1000, 9999);

    return dist(gen);
}

void DeterminarDescuento()
{
    int codigo = GeneradorRandom();

    std::cout << "\nSu codigo de descuento es: "
              << codigo << std::endl;

    if (codigo % 2 == 0)
    {
        descuento = total * 0.10;
        subtotal = total - descuento;

        std::cout << "Felicidades! Ha recibido un descuento del 10%.\n";
    }
    else
    {
        descuento = 0.0;
        subtotal = total;

        std::cout << "No tiene descuento.\n";
    }
}

void GenerarFactura()
{
    std::cout << "\n========== FACTURA ==========\n";
    std::cout << "Cliente: " << nombre << std::endl;

    std::cout << "Horas alquiladas: ";
    for (int i = 0; i < TAM; i++)
    {
        std::cout << horas[i] << " ";
    }

    std::cout << "\nPrecio por hora: $" << precio << std::endl;
    std::cout << "Costo total: $" << total << std::endl;
    std::cout << "Descuento: $" << descuento << std::endl;
    std::cout << "Total a pagar: $" << subtotal << std::endl;
    std::cout << "=============================\n";
}