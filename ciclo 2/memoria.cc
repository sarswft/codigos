#include <iostream>



int main() {

    
  // 4 bytes se reservan en el stack3
  	    int numero = 99;
  // 20 bytes se reservan en el stack
	    int lista_numeros[5] = {1,2,46,7,8};
	    
	  // Reserva de memoria dinámica para int
	    int *ptr = new int;
	  // Libere la memoria dinámica
	    delete ptr;
	  // Puntero apunta a nulo
	    ptr = nullptr;
	    
	    return 0;
	}