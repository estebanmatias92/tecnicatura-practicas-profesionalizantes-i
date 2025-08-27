#include "Cell.hpp"
#include <iostream>

/**
 * @brief Función principal que ejecuta la simulación de la célula.
 * @details Crea una célula, muestra su estado inicial y simula
 * varios ciclos de vida para observar los cambios en su estado.
 */
int main() 
{
    std::cout << "Iniciando simulación celular..." << std::endl;

    // Creamos una célula para un "Organismo Eucariota" con una secuencia de ADN y 5 mitocondrias.
    // Usando la pila o stack que se destruye automáticamente a salir del main, por eso no hay delete.
    Cell myCell("Organismo Eucariota", "ATCGGCTAGCTAGCATGCTAAGATAGAT", 5);

    //Usando la memoria del Heap (Dinámica)
    //Cell myHeapCell = new Cell("Organismo Eucariota", "ATCGGCTAGCTAGCATGCTAAGATAGAT", 5);
    //delete myHeapCell;

    // Mostramos el estado inicial de la célula.
    myCell.printStatus();

    // Da error el atributo organismName es privado.
    //std::cout << myCell.organismName << std::endl;

    //Cell juanita("Organismo maligno" "asDASDASDASDASDASDASD", 8);
    //juanita->printStatus();

    // Simulamos 3 ciclos de vida.
    for (int i = 0; i < 3; ++i) 
    {
        myCell.liveOneCycle();
        myCell.printStatus();
    }

    std::cout << "\nSimulación finalizada." << std::endl;

    return 0;
}