#include <iostream>
#include <string>


void fTotalaPagar(struct Vehiculo* vehiculo);

struct Vehiculo
{
    std::string placa;
    int horas;
};

int main()
{
    Vehiculo* vehiculo = new Vehiculo;


    std::cout<<"Ingrese la placa del vehiculo: ";
    std::cin >> vehiculo->placa;
    std::cout << "Ingrese la cantidad de horas: ";
    std::cin >> vehiculo->horas;
    fTotalaPagar(vehiculo);

    delete vehiculo;

    return 0;
}

void fTotalaPagar(Vehiculo* vehiculo)
{
    double precioPorHora = 1.50;
    double total = vehiculo->horas * precioPorHora;

    std::cout << "Total a pagar por el vehiculo con placa " << vehiculo->placa << ": $" << total << std::endl;
}