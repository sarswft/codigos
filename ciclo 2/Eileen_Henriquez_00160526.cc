#include <iostream>

double *saldo_dolares = new double(1000.0);
double *saldo_euros = new double(500.0);
double precio_compra = 1.08; // 1 euro = 1.08 dólares
double precio_venta = 1.12;  // 1 euro = 1.12 dólares
double cantidad_euros = 0.0;

void fConsultarDivisa(double precio_compra, double precio_venta);
void fComprarEuros(struct cliente *c, double *precio_compra, double *cantidad_euros);
void fVenderEuros(struct cliente *c, double *precio_venta, double *cantidad_euros);
void fConsultarSaldo(struct cliente *c);
void fMostrarMenu();

struct cliente
{
    std::string nombre;
    double *saldo_dolares;
    double *saldo_euros;
};

int main()
{
    char opcion;

    fMostrarMenu();
    std::cin >> opcion;

    switch (opcion)
    {
    case 'A':
    case 'a':
        fConsultarDivisa(precio_compra, precio_venta);
        break;
    case 'B':
    case 'b':
    {
        fComprarEuros(new cliente{"", saldo_dolares, saldo_euros}, &precio_compra, &cantidad_euros);
        break;
    }
    case 'C':
    case 'c':
    {
        fVenderEuros(new cliente{"", saldo_dolares, saldo_euros}, &precio_venta, &cantidad_euros);
        break;
    }
    case 'D':
    case 'd':
    {
        fConsultarSaldo(new cliente{"", saldo_dolares, saldo_euros});
        break;
    }
    default:
        std::cout << "Opcion invalida. Por favor seleccione A, B, C o D." << std::endl;
        break;
    }

    std::cout << "Desea realizar otra operacion? (S/N): ";
    std::cin >> opcion;
    if (opcion == 'S' || opcion == 's')
    {
        main(); // Mandar de regreso al inicio del programa para realizar otra operacion
    }
    else
    {
        std::cout << "Gracias por usar el sistema de cambio de divisas." << std::endl;
    }

    // liberar memoria
    delete saldo_dolares;
    delete saldo_euros;

    return 0;
}

//FUNCIONES

// funcion para consultar el tipo de cambio
void fConsultarDivisa(double precio_compra, double precio_venta)
{

    std::cout << "precio de compra: " << precio_compra << "\nPrecio de venta: " << precio_venta << std::endl;
}

// funcion para COMPRAR euros
void fComprarEuros(cliente *c, double *precio_compra, double *cantidad_euros)
{

    struct cliente *cliente_actual = c;
    std::cout << "Ingrese su nombre: ";
    std::cin >> c->nombre;
    std::cout << "Ingrese la cantidad de euros a comprar: ";
    std::cin >> *cantidad_euros;

    if (*cantidad_euros <= 0) // validacion
    {
        std::cout << "Cantidad de euros invalida. Debe ser MAYOR a cero." << std::endl;
        return;
    }

    double costo_total_dolares = *precio_compra * *cantidad_euros; // validacion
    if (*(c->saldo_dolares) >= costo_total_dolares)
    {
        *(c->saldo_dolares) -= costo_total_dolares;
        *(c->saldo_euros) += *cantidad_euros;
        std::cout << "Compra exitosa. Nuevo saldo en dolares: $" << *(c->saldo_dolares)
                  << "\nNuevo saldo en euros: e" << *(c->saldo_euros) << std::endl;
    }
    else
    {
        std::cout << "Fondos insuficientes para realizar la compra." << std::endl;
    }
}

// funcion para vender euros
void fVenderEuros(cliente *c, double *precio_venta, double *cantidad_euros)
{

    struct cliente *cliente_actual = c;
    std::cout << "Ingrese su nombre: ";
    std::cin >> c->nombre;
    std::cout << "Ingrese la cantidad de euros a vender: ";
    std::cin >> *cantidad_euros;

    if (*cantidad_euros <= 0) // validacion para que no se pueda vender una cantidad negativa o cero
    {
        std::cout << "Cantidad de euros invalida. Debe ser mayor a cero." << std::endl;
        return;
    }

    if (*(c->saldo_euros) >= *cantidad_euros)
    {
        *(c->saldo_euros) -= *cantidad_euros;
        *(c->saldo_dolares) += *precio_venta * *cantidad_euros;
        std::cout << "Venta exitosa. Nuevo saldo en dolares: $" << *(c->saldo_dolares)
                  << "\nNuevo saldo en euros: e" << *(c->saldo_euros) << std::endl;
    }
    else
    {
        std::cout << "Fondos insuficientes para realizar la venta." << std::endl;
    }
}

// funcion para consultar el saldo
void fConsultarSaldo(cliente *c)
{
    std::cout << "Saldo en dolares: $" << *(c->saldo_dolares) << "\n Saldo en euros: e" << *(c->saldo_euros) << std::endl;
}

// Funcion para mostrar el menu
void fMostrarMenu()
{

    std::cout << "----- Bienvenido al sistema de cambio de divisas -----" << std::endl;
    std::cout << "Para consultar el tipo de cambio, seleccione A" << std::endl;
    std::cout << "Para comprar euros, seleccione B" << std::endl;
    std::cout << "Para vender euros, seleccione C" << std::endl;
    std::cout << "Para consultar su saldo, seleccione D" << std::endl;
}