#include <iostream>

int a, b, total;
int main() {
    std::cout << "Ingrese el primer numero: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> b;
    total = a + b;
    std::cout << "La suma es: " << total << std::endl;
    return 0;
}

