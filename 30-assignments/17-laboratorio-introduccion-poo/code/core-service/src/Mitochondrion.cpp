#include "Mitochondrion.hpp"

Mitochondrion::Mitochondrion() 
{
    // Constructor por defecto. No necesita inicialización especial.
}

Mitochondrion::~Mitochondrion()
{
    // Destructor.
}

int Mitochondrion::produceATP() const 
{
    // Simula la producción de una cantidad fija de energía.
    return 10; 
}