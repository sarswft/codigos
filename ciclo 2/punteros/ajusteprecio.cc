#include <iostream>

int main()
{
    int tam = 5;
    double precios[5] = {100.0, 250.0, 75.0, 500.0, 120.0};

    std::cout << "Precios originales: \n";
    for (int i = 0; i < tam; i++)
    {
        std::cout << precios[i] << " ";
    }
    std::cout << "\n\n";

    // Llamamos a la función pasándole el arreglo (que actúa como puntero)
    ajustarPrecios(precios, tam);

    std::cout << "Precios modificados con el 10% de aumento: \n";
    for (int i = 0; i < tam; i++)
    {
        std::cout << precios[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

// La función recibe un puntero al arreglo (double *ptr) y la cantidad de elementos
void ajustarPrecios(double *ptr, int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        // *(ptr + i) se mueve por cada casilla y modifica el valor original
        // Aumentar un 10% es multiplicar por 1.10 (o sumar el 10%)
        *(ptr + i) = *(ptr + i) * 1.10;
    }
}