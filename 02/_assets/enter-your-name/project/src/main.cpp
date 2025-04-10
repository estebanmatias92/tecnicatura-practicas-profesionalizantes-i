#include <iostream>  
#include <string>  // Include string header

/* Utilizo namespace std para no escribir std::
delante de cada construcción del lenguaje */  
using namespace std;  
  
int main()  
{  
    /* name es una variable del tipo string, una reserva de memoria donde voy a
    guardar un texto. */  
    string name;  

    /* Mostrar por pantalla-> Enter your name: */  
    cout << "Enter your name: ";  

    /* Espera que introduzca un texto por consola y al
    presionar enter lo voy a guardar en la variable y
    continuar con la ejecución del programa */  
    getline(cin, name);  // Changed to getline to handle spaces in names

    /* Muestro -> Hello <el nombre escrito y guardado en la variable name> */  
    cout << "Hello " << name << endl;  

    /* Esto a continuación es para simular una pausa en la ejecución del
    programa y que no cierre */  
    cout << "Press Enter to exit...";  // Added prompt for better UX
    cin.ignore();  
    cin.get();  

    return 0;  
}