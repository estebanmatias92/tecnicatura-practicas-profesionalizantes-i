/*
Para el ejercicio anterior, Abrir el archivo y mostrar las frases x pantalla, con cada frase
en una línea, con Interlineado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef const char* cstring;

// void error(const char* message, const char* detail = "") //ERROR C++ Style 
// {
//     fprintf(stderr, "%s", message);
//     fprintf(stderr, "%s\n", detail);
//     exit(1);
// }

void error(cstring message)
{
    fprintf(stderr, "%s", message);
    exit(1);
}

void show_quotes_of(FILE* file)
{
    char line[255];
    while(fgets(line, 255, file) != NULL)
    {
        printf("%s\n",line);
    }
}

int main()
{
    FILE* text_file = fopen( "QuotesOfBjarne.txt", "r" );
    if(text_file==NULL) error("Error opening file"); 
    show_quotes_of(text_file);
    fclose(text_file);
    return 0;
}
