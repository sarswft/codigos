#include <iostream>

struct Rectangulo {
    double ancho;
    double alto;
};

// Función que corrige dimensiones negativas asignándoles cero (por referencia)
void validarDimensiones(Rectangulo &r) {
    if (r.ancho < 0) {
        r.ancho = 0.0;
    }
    if (r.alto < 0) {
        r.alto = 0.0;
    }
}

// Función que calcula el área
double calcularArea(const Rectangulo &r) {
    return r.ancho * r.alto;
}

int main() {
    // Crear un rectángulo con un valor negativo a propósito para probar la validación
    Rectangulo rect = {-5.0, 10.0};

    std::cout << "Antes de validar -> Ancho: " << rect.ancho << ", Alto: " << rect.alto << std::endl;

    // Llamamos a la función de validación (modifica el original gracias a la referencia)
    validarDimensiones(rect);

    std::cout << "Despues de validar -> Ancho: " << rect.ancho << ", Alto: " << rect.alto << std::endl;

    // Calcular y mostrar el área
    double areaTotal = calcularArea(rect);
    std::cout << "El area del rectangulo es: " << areaTotal << std::endl;

    return 0;
}