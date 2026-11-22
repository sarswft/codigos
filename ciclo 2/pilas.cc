#include <iostream>
#include <stack>

void Imprimir();

int main(){

    std::stack<char> *pila_nombre = new std::stack<char>();
    pila_nombre->push('a');
    pila_nombre->push('r');
    pila_nombre->push('a');
    pila_nombre->push('s');
    Imprimir();


    std::cout << "cantidad de elementos: " << pila_nombre->size() << std::endl;

    return 0;
}

void Imprimir(){
    std::stack<char> *pila_nombre = new std::stack<char>();
     while(!pila_nombre->empty()){
        std::cout << pila_nombre->top() << std::endl;
        pila_nombre->pop();
    }

}

