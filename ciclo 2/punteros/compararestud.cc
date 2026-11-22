#include <iostream>
#include <string>

// Definir la struct Estudiante
struct Estudiante {
    std::string nombre;
    double nota;
};

// la función recibe dos estudiantes por referencia y RETORNA una referencia (Estudiante&)
Estudiante& obtenerMayorNota(Estudiante &e1, Estudiante &e2) {
    // Compara las notas de ambos estudiantes
    if (e1.nota >= e2.nota) {
        return e1; // Retorna la referencia al estudiante 1
    } else {
        return e2; // Retorna la referencia al estudiante 2
    }
}

int main() {
    Estudiante est1 = {"Ana", 8.5};
    Estudiante est2 = {"Carlos", 9.5};

    std::cout << "Estudiante 1: " << est1.nombre << " (Nota: " << est1.nota << ")\n";
    std::cout << "Estudiante 2: " << est2.nombre << " (Nota: " << est2.nota << ")\n\n";

    // Llamamos a la función y guardamos el resultado en una REFERENCIA (Estudiante &mejor)
   
    Estudiante &mejor = obtenerMayorNota(est1, est2);// & ---> Al ser referencia, 'mejor' es un alias del estudiante ganador.

    std::cout << "El estudiante con mayor nota es: " << mejor.nombre << " con " << mejor.nota << std::endl;

    

    return 0;
}







// Dato curioso de retornar referencias: ¡puedes modificar el objeto original a través de ella!
    // Si quisieras cambiarle la nota al ganador directamente:
    // mejor.nota = 10.0; 