/*
Para el Archivo del ejercicio (a) 
contar la cantidad de palabras que hay x línea, luego
mostrar la cantidad total y el promedio de palabras x línea.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef const char* cstring;

void error(cstring message)
{
    fprintf(stderr, "\n%s\n\n", message);
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
    int sentences_counter = 0;
    int total_words = 0;
    char sentence[255];
    while(fgets(sentence, 255, file) != NULL)
    {
        int words_per_sentence = count_words_of(sentence);
        printf("La frase número %i tiene %i palabras \n", ++sentences_counter, words_per_sentence);
        total_words += words_per_sentence;
    }
    printf("Cantidad total de palabras: %i\n", total_words);
    printf("Promedio de palabras por línea: %f\n", (float)total_words / (float)sentences_counter);
}

int main()
{
    FILE* text_file = fopen( "QuotesOfBjarne.txt", "r" );
    if(text_file==NULL) error("Error opening file"); 
    show_words_of(text_file);
    fclose(text_file);
    return 0;
}