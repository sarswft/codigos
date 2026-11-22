#include <iostream>

int main()
{
    // Simulando que la asignación falló
    int *p = nullptr;

    // Reservando memoria
    // int *p = new int;

    // Verificando la asignación de memoria
    if (p == nullptr)
    {

        std::cout << "Error de asignacion de dir. de memoria";
        exit(1);
    }
    else
    {

        std::cout << "Direccion de memoria asignada " << p;
    }

    // Liberando memoria
    delete p;

    return 0;
}