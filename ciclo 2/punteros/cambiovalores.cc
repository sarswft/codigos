#include <iostream>
#include <string>

// Definir la struct Persona con edad y altura
struct Persona {
    int edad;
    double altura;
};

// La función recibe dos personas mediante referencias (&)
void compararEIntercambiar(Persona &p1, Persona &p2) {
    // Si la primera persona es menor que la segunda en edad
    if (p1.edad < p2.edad) {
        // se intercambian únicamente sus edades usando una variable auxiliar
        int aux = p1.edad;
        p1.edad = p2.edad;
        p2.edad = aux;
        
        // (O también std::swap(p1.edad, p2.edad); si lo permiten)
    }
}

int main() {
    
    Persona persona1 = {18, 1.65};
    Persona persona2 = {22, 1.70};

    std::cout << "Antes: Persona 1 (Edad: " << persona1.edad << "), Persona 2 (Edad: " << persona2.edad << ")\n";

    // Llamamos a la función pasándoles las variables directamente
    compararEIntercambiar(persona1, persona2);

    std::cout << "Despues: Persona 1 (Edad: " << persona1.edad << "), Persona 2 (Edad: " << persona2.edad << ")\n";

    return 0;
}