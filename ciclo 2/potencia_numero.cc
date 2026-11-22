#include <iostream>

int CalcularPotencia(int base, int exponente);
void VerificarsiesPar(int x);
void VerificarsiesImpar(int x);


int main(){
    int base, exponente;
    std::cout << "Ingrese un numero: ";
    std::cin >> base;
    std::cout << "Ingrese el numero por el cual sera elevado: ";
    std::cin >> exponente;

    std::cout << "El resultado de " << base << " elevado a la " << exponente << " es: " << CalcularPotencia(base, exponente) << std::endl;
    VerificarsiesPar(base);
    VerificarsiesImpar(base);

    return 0; 
}

int CalcularPotencia(int base, int exponente){
    if (exponente == 0)
    { return 1; }
    else
    { return base * CalcularPotencia(base, exponente - 1); }
}
//escribir una funcion recursiva que devuelva el termino n-esimo de la serie de fibonacci

void VerificarsiesPar(int x){
    if (x % 2 == 0){
        std::cout << "El numero es par" << std::endl;
    } 
} 
void VerificarsiesImpar(int x){
    if (x % 2 != 0){
        std::cout << "El numero es impar" << std::endl;
    } 
}