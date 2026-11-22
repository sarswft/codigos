#include <iostream>
#include <queue>
#include <string>

struct Auto
{
    std::string modelo;
    int placa;
    std::string color;
};

void AgregarAuto(std::queue<Auto> &autos);
void mostrarCola(std::queue<Auto> cola);
void AtenderAuto(std::queue<Auto>& colaTaller);
int main()
{

    std::queue <Auto> cola;

    AgregarAuto(cola);
    mostrarCola(cola);
    AtenderAuto(cola);

    return 0;
}
void AtenderAuto(std::queue<Auto>& colaTaller)
{
    if (!colaTaller.empty()) {
        std::cout << "No hay autos en la cola del taller." << std::endl;
        return; 
    }
    auto autoAtendido = colaTaller.front();
    colaTaller.pop();
    std::cout << "atendiendo auto: " << autoAtendido.modelo << std::endl;
    std::cout << "placa: " << autoAtendido.placa << std::endl;
    std::cout << "color: " << autoAtendido.color << std::endl;
}
    

void AgregarAuto(std::queue<Auto> &autos)
{

    Auto a;
    std::cout << "Ingrese el Modelo del auto: " << std::endl;
    getline(std::cin, a.modelo);
    std::cout << "\nIngrese el color del auto: " << std::endl;
    getline(std::cin, a.color);
    std::cout << "\nIngrese el color del auto: " << std::endl;
    std::cin >> a.placa;

    autos.push(a);
    std::cout << "\nAuto agregado correctamente" << std::endl;
}




void mostrarCola(std::queue<Auto> cola) {
    //muestra todos los autos en espera

    while (!cola.empty()) {
        Auto autoActual = cola.front();
        std::cout << "Modelo: " << autoActual.modelo << ", Placa: " << autoActual.placa << ", Color: " << autoActual.color << std::endl;
        cola.pop();
    }
}