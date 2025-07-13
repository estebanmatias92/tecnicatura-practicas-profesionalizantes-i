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
    
    n1 = 2;//definir: establecer el valor de la variable.

    int n2 = 10; //declarar y definir.

    //solo declarando la variable resultado:
    int result, prod_result;
    
    //llamar a la función y cargar lo que retorna en la variable "result".
    result = add(n1, n2);
    prod_result = prod(n1, n2);
    
    //mostrar resultado en pantalla:
    cout << "El resultado de la suma es: " << result << endl;
    cout << "El resultado de la multiplicacion es: " << prod_result << endl;

    //siempre se retorna int en la función main
    //0 significa todo piola para el computador.
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