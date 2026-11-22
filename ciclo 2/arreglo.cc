#include <iostream>

int main(){
    
    char nombre[] = {'s', 'a', 'r', 'a', 'i'};
    std::cout << "Accediendo a posicion 2: " << nombre[2] << std::endl;

    //acceder a la dir memoria
    std::cout << "Direccion de memoria de nombre: " << &nombre << std::endl;

    //notacion de punteros
    std::cout <<"accediendo a posicion 2 "<< *(nombre + 2) << std::endl;


    
    
    
    return 0;

}