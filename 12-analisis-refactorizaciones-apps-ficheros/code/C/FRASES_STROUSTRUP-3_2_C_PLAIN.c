/*
Para el Archivo del ejercicio (a) 
contar la cantidad de palabras que hay x línea, luego
mostrar la cantidad total y el promedio de palabras x línea.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char** argv)
{
    FILE* file = fopen( "QuotesOfBjarne.txt", "r" ); 

    if(file==NULL)
    {
        fprintf(stderr, "%s\n", "Error opening file");
        exit (1);
    }

    while(feof(file) == 0)
    {
        char* line;
        fgets(line, 255, file);
        printf("%s\n",line);
    }

    fclose(file);

    return 0;
}