/*
Para el ejercicio anterior, Abrir el archivo y mostrar las frases x pantalla, con cada frase
en una línea, con Interlineado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void print_error(const char* message, const char* detail = "")
// {
//     fprintf(stderr, "%s", message);
//     fprintf(stderr, "%s\n", detail);
//     exit(1);
// }

void print_error(const char* message)
{
    fprintf(stderr, "%s", message);
    exit(1);
}

void show_quotes_of(FILE* file)
{
    while(feof(file) == 0)
    {
        // const char* line;
        char* line;
        fgets(line, 255, file);
        printf("%s\n",line);
    }
}

int main()
{
    FILE* text_file = fopen( "QuotesOfBjarne.txt", "r" ); 
    if(text_file==NULL) print_error("Error opening file");
    show_quotes_of(text_file);
    fclose(text_file);
    return 0;
}
