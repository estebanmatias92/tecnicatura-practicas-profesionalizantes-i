#include <iostream>  
#include <string>  // Explicitly include string header

/* Utilizo namespace std para no escribir std::
delante de cada construcción del lenguaje */  
using namespace std;  
  
int main()  
{  
    int anioAct = 0;   // Año Actual
    int mesAct = 0;    // Mes actual
    int diaAct = 0;    // Día actual

    int anioNac = 0;   // Año nacimiento
    int mesNac = 0;    // Mes nacimiento
    int diaNac = 0;    // Día nacimiento

    // Solicitar datos actuales
    cout << "Ingrese el año actual: ";
    cin >> anioAct;

    cout << "Ingrese el mes actual (1-12): ";
    cin >> mesAct;

    cout << "Ingrese el dia actual: ";
    cin >> diaAct;

    // Solicitar datos de nacimiento
    cout << "Ingrese su año de nacimiento: ";
    cin >> anioNac;

    cout << "Ingrese su mes de nacimiento (1-12): ";
    cin >> mesNac;

    cout << "Ingrese su dia de nacimiento: ";
    cin >> diaNac;

    // Mostrar los resultados en el mismo orden
    cout << "\nDatos ingresados:\n";
    cout << "Año actual: " << anioAct << endl;
    cout << "Mes actual: " << mesAct << endl;
    cout << "Dia actual: " << diaAct << endl;

    cout << "Año de nacimiento: " << anioNac << endl;
    cout << "Mes de nacimiento: " << mesNac << endl;
    cout << "Dia de nacimiento: " << diaNac << endl;


    cout << "Press Enter to exit...";  // Added prompt for better UX
    cin.ignore();  
    cin.get();  

    return 0;  
}