#include <iostream>
using namespace std;

//Declarar prototipo de función:
int add(int a, int b);

// My own declaration
int prod (int n1, int n2);

int main()
{
    /* code */
    //declarar y definir variables de tipo integer.
    
    int n1;//declarar: reservo y denomino el contenedor (espacio en memoria) o variable. 
    n1 = 0;
    int n2 = 0; //declarar y definir.

    //solo declarando la variable resultado:
    int result, prod_result;

    cout << "\nCalcular SUMA!!!" << endl;
    cout << "1) Numero: ";
    cin >> n1;
    cout << "2) Numero: ";
    cin >> n2;
    
    //llamar a la función y cargar lo que retorna en la variable "result".
    result = add(n1, n2);
    
    //mostrar resultado en pantalla:
    cout << "Resultado: "<< n1 << " + " << n2 << " = "<< result << endl;


    /**
     * Another operation
     */

    // Reset values
    n1, n2 = 0;
    
    // Entrada de datos
    cout << "\nCalcular MULTIPLICACION!!!" << endl;
    cout << "1) Numero: ";
    cin >> n1;
    cout << "2) Numero: ";
    cin >> n2;

    // Mostrar resultado
    cout << "Resultado: " << n1 << " * " << n2 << " = "<< prod(n1, n2) << endl;

    //siempre se retorna int en la función main
    //0 significa todo piola para el computador.
    cout << endl
    return 0;
}

// Product between 2 numbers
int prod(int num1, int num2) {
    return num1 * num2;
}

//Definir función
int add(int a, int b)
{
    return  a + b; 
}