#include <iostream>

struct Informacion
{
    int numero;
};
struct Nodo
{
    Informacion info;
    Nodo *siguiente;
};

// puntero global
struct Nodo *Lista = nullptr;

// Declaración de funciones
void InsertarInicio(int n);
void Imprimir();

int main()
{

    InsertarInicio(30);
    InsertarInicio(20);
    InsertarInicio(100);
    Imprimir();
    // manualmente
    // std::cout <<"Dir. memoria primer elemento: " << Lista << " - Valor: " << Lista->info.numero << std::endl;
    //  std::cout <<"Dir memoria segundo elemento: "<< Lista->siguiente << " - Valor: " << Lista->siguiente->info.numero << std::endl;
    // std::cout <<"Dir memoria tercer elemento: "<< Lista->siguiente->siguiente << " - Valor: " << Lista->siguiente->siguiente->info.numero << std::endl;

    return 0;
}

// Insertar nodo al inicio de la lista
void InsertarInicio(int n)
{
    // Reserva de memoria
    struct Nodo *nuevo_nodo = new Nodo;
    nuevo_nodo->info.numero = n;

    if (Lista == nullptr)
    {
        Lista = nuevo_nodo;
    }
    else
    {
        nuevo_nodo->siguiente = Lista;
        Lista = nuevo_nodo;
    }
}

void Imprimir()
{
    struct Nodo *temporal = Lista;
    if (Lista != nullptr)
    {
        while (temporal != nullptr)
        {
            std::cout << "Lista " << temporal->info.numero << " Direccion " << temporal << " dir nodo siguiente " << temporal->siguiente << std::endl;
            temporal = temporal->siguiente;
        }
    }
    else
    {
        std::cout << "Lista vacia";
    }
}