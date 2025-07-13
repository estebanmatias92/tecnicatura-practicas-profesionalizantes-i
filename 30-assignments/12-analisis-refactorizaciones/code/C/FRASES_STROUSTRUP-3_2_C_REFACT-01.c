/*
Para el Archivo del ejercicio (a) 
contar la cantidad de palabras que hay x línea, luego
mostrar la cantidad total y el promedio de palabras x línea.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef const char* cstring;

void print_error(cstring message)
{
    fprintf(stderr, "%s", message);
    exit(1);
}

int count_words_of(cstring sentence)
{
    int i = 0;
    int counter = 1;

    while (i < strlen(sentence))
    {
        if (sentence[i] == ' ')
        {
            counter++;
        }
        i++;
    }
    return counter;    
}

void show_words_of(FILE* file)
{
    char sentence[255];
    int senteces_counter = 0;
    while(fgets(sentence, 255, file) != NULL)
    {
        printf("%s\n",sentence);
        senteces_counter++;
    }
}

int main()
{
    FILE* text_file = fopen( "QuotesOfBjarne.txt", "r" );
    if(text_file==NULL) print_error("Error opening file"); 
    show_words_of(text_file);
    fclose(text_file);
    return 0;
}
