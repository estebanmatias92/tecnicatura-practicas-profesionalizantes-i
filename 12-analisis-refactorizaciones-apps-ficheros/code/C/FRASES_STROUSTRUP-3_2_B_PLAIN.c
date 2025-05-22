/*
Para el ejercicio anterior, Abrir el archivo y mostrar las frases x pantalla, con cada frase
en una línea, con Interlineado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
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