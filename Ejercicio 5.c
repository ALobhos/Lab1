#include <stdio.h>

int main()
{
	int personas = 0;
	char fin;
	float estatura, promedio, total=0;
	printf ("Promedio de estatura (para calcular ingrese s)\n");
	printf ("\n");
	while (fin!='s' && fin!='S'){
		printf ("Ingrese la estatura de la persona: ");
		scanf ("%f", &estatura);
		total = estatura+total;
		personas++;
		while (getchar()!='\n');
		printf ("¿Calcular promedio?: ");
		scanf ("%c", &fin);
	}
	promedio = total / personas;
	printf ("El promedio de estaturas es %f metros", promedio);
	return 0;
}
	
		
		
