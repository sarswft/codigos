#include <iostream>

int CalcularFactorial(int x);
int CalcularPotencia(int base, int exponente);

int main()
{

    int x;
    std::cout << "Ingrese un numero para calcular su factorial: ";
    std::cin >> x;
    std::cout << "El factorial de " << x << " es: " << CalcularFactorial(x) << std::endl;

    return 0;
}

int CalcularFactorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * CalcularFactorial(x - 1);
    }
}