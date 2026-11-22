#include <iostream>

std::string placa;
std ::string tipoVehiculo;
int horaEntrada;
int espaciosDisponibles = 10;
int espaciosOcupados = 0;
char opcion;
void fRegistrarVehiculo();
void fRetirarVehiculo();
void fMostrarEspaciosDisponibles();
void fMostrarVehiculosRegistrados();
void fMostrarVehiculosRetirados();
void fMostrarMenu();

int main()
{ 
    fMostrarMenu();

    switch (opcion)
    {
        case 'a':
            fRegistrarVehiculo();
            break;
        case 'b':
            fRetirarVehiculo();
            break;
        case 'c':
            fMostrarEspaciosDisponibles();
            break;
        case 'd':
            fMostrarVehiculosRegistrados();
            break;
        case 'e':
            fMostrarVehiculosRetirados();
            break;
        default:
            std::cout << "Opcion invalida \n";
    }

    return 0;
}

void fRegistrarVehiculo()
{
    std::cout << "numero de placa: ";
    std::cin >> placa;
    std::cout << "tipo de vehiculo: ";
    std::cin >> tipoVehiculo;
    std::cout << "hora de entrada: ";
    std::cin >> horaEntrada;
    if (espaciosDisponibles > 0)
    {
        espaciosDisponibles--;
        espaciosOcupados++;
        std::cout << "Vehiculo registrado exitosamente \n";
    }
    else
    {
        std::cout << "No hay espacios disponibles \n";
    }
}

void fRetirarVehiculo()
{
    std::cout << "numero de placa: ";
    std::cin >> placa;
    std::cout << "tipo de vehiculo: ";
    std::cin >> tipoVehiculo;
    std::cout << "hora de salida: ";
    std::cin >> horaEntrada;
    if (espaciosOcupados > 0)
    {
        espaciosDisponibles++;
        espaciosOcupados--;
        std::cout << "Vehiculo retirado exitosamente \n";
    }
    else
    {
        std::cout << "No hay vehiculos registrados \n";
    }
}

void fMostrarEspaciosDisponibles()
{
    std::cout << "espacios disponibles: " << espaciosDisponibles << "\n";
    std::cout << "espacios ocupados: " << espaciosOcupados << "\n";
}
void fMostrarVehiculosRegistrados()
{
    std::cout << "vehiculos registrados: \n";
    std::cout << "placa: " << placa << "\n";
    std::cout << "tipo de vehiculo: " << tipoVehiculo << "\n";
    std::cout << "hora de entrada: " << horaEntrada << "\n";
}

void fMostrarVehiculosRetirados()
{
    std::cout << "vehiculos retirados: \n";
    std::cout << "placa: " << placa << "\n";
    std::cout << "tipo de vehiculo: " << tipoVehiculo << "\n";
    std::cout << "hora de salida: " << horaEntrada << "\n";
} 
  void fMostrarMenu()
  { 
    std::cout << "Bienvenido al sistema de estacionamiento \n";
    std::cout << "a) Registrar vehiculo \n";
    std::cout << "b) Retirar vehiculo \n";
    std::cout << "c) Mostrar espacios disponibles \n";
    std::cout << "d) Mostrar vehiculos registrados \n";
    std::cout << "e) Mostrar vehiculos retirados \n";
    std::cout << "Ingrese una opcion: "; 
    std::cin >> opcion;

  }