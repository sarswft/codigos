#include <iostream>

struct Contacto{
    std::string nombre;
    std::string numero_telefono;
    struct Contacto *siguiente;
};

struct Contacto *Lista = nullptr;


void InsertarInicio(std::string nombre, std::string numero_telefono);
void eliminarInicio();
void Imprimir();

  
int main(){

    Contacto contacto1;
    contacto1.nombre = "Sara";
    contacto1.numero_telefono = "123456789";
    InsertarInicio(contacto1.nombre, contacto1.numero_telefono);    
    Imprimir();
    eliminarInicio();
    Imprimir();
    //agregar insertar final y eliminar final

 
    return 0;
}
void InsertarInicio(std::string nombre, std::string numero_telefono){

    struct Contacto *nuevo_contacto = new Contacto;
    nuevo_contacto->nombre = nombre;
    nuevo_contacto->numero_telefono = numero_telefono;

    nuevo_contacto->siguiente = Lista;
    Lista = nuevo_contacto;
}

void eliminarInicio(){
    if (Lista == nullptr){
        std::cout << "La lista esta vacia, no se puede eliminar." << std::endl;
        return;
    }
    struct Contacto *temp = Lista;
    Lista = Lista->siguiente;
    delete temp;
}
void Imprimir(){
    struct Contacto *temporal = Lista;
    if (Lista != nullptr){
        while (temporal != nullptr){
            std::cout << "Nombre: " << temporal->nombre << ", Numero: " << temporal->numero_telefono << std::endl;
            temporal = temporal->siguiente;
        }
    } else {
        std::cout << "La lista esta vacia." << std::endl;
    }
}