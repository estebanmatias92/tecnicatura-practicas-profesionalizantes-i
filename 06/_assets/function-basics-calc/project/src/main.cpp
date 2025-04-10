#include <iostream>
using namespace std;

//Declarar prototipo de función:
double addition(double a, double b);
double substraction(double a, double b);
double product(double a, double b);
double division(double a, double b);

int main()
{
    /* code */
    //declarar y definir variables de tipo integer.
    int n1, n2 = 0;
    int result = 0;

    // Pause and clear screen
    system("clear"); // Now clear the entire console screen
    

    /**
     * Primera Operacion: Suma
     */

    // Entrada de datos
    cout << endl << "----------"  
         << endl << "   SUMA   "  
         << endl << "----------" << endl << endl;
    cout << "1) Numero: ";
    cin >> n1;
    cout << "2) Numero: ";
    cin >> n2;
    
    // Procesamiento
    result = addition(n1, n2);
    
    // Salida de datos
    cout << "Resultado: "<< n1 << " + " << n2 << " = "<< result << endl << endl;
    
    // Reset values
    n1, n2 = 0;

    // Pause and clear screen
    cout << "Presiones cualquier tecla para continuar...";
    cin.ignore(); // Clear the Input Buffer
    cin.get(); // Get the pressed key
    system("clear"); // Now clear the entire console screen
    
    
    /**
    * Another operation: Resta
    */
    
    // Entrada de datos
    cout << endl << "-----------"  
    << endl << "   RESTA   "  
    << endl << "-----------" << endl << endl;
    cout << "A: ";
    cin >> n1;
    cout << "\033[F\033[2K" << "B: ";
    cin >> n2;

    // Mostrar resultado
    cout << "\033[F\033[2K" << "\bResultado: " << n1 << " - " << n2 << " = "<< substraction(n1, n2) << endl << endl;

    // Reset values
    n1, n2 = 0;


    // Pause and clear screen
    cout << "Presiones cualquier tecla para continuar...";
    cin.ignore(); // Clear the Input Buffer
    cin.get(); // Get the pressed key
    system("clear"); // Now clear the entire console screen
    
    
    /**
     * Another operation: Product
     */

    // Entrada de datos
    cout << endl << "--------------------"  
         << endl << "   MULTIPLICACION   "  
         << endl << "--------------------" << endl << endl;
    cout << "1) Numero: ";
    cin >> n1;
    cout << "2) Numero: ";
    cin >> n2;

    // Mostrar resultado
    cout << "Resultado: " << n1 << " * " << n2 << " = "<< product(n1, n2) << endl << endl;
    
    // Reset values
    n1, n2 = 0;
    
    
    // Pause and clear screen
    cout << "Presiones cualquier tecla para continuar...";
    cin.ignore(); // Clear the Input Buffer
    cin.get(); // Get the pressed key
    system("clear"); // Now clear the entire console screen
        

    /**
     * Another operation: Division
     */

    // Entrada de datos
    cout << endl << "--------------"  
         << endl << "   DIVISION   "  
         << endl << "--------------" << endl << endl;
    cout << "1) Numero: ";
    cin >> n1;
    cout << "2) Numero: ";
    cin >> n2;

    // Mostrar resultado
    cout << "Resultado: " << n1 << " * " << n2 << " = "<< division(n1, n2) << endl << endl;

    return 0;
}

// My function
double addition(double num1, double num2) {
    return num1 + num2;
}

double substraction(double num1, double num2) {
    return num1 - num2;
}

double product(double num1, double num2) {
    return num1 * num2;
}

double division(double num1, double num2) {
    return num1 / num2;
}