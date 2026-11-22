#include <iostream>
#include <stack>

std::string sara;
std::stack<std::string> pila;
void imprimirPila(std::stack<std::string> pila);

int main(){
    std::stack<std::string> sara;
    sara.push("s");
    sara.push("a");
    sara.push("r");
    sara.push("a");

    imprimirPila(sara);





    return 0;
}

void ImprimirPila(std::stack<std::string> pila)
{
    while (!pila.empty())
    {
        std::cout << pila.top() << std::endl;
        pila.pop();
    }
}


