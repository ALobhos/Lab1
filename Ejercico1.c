#include <stdio.h>
#include <stdlib.h>

int main()
{
	const char c1[] = "Gerardo Muñoz", c2[] = "Lisbeth Jimenez", c3[] = "Fabio Duran";
	float p1, p2, p3, pn;
	float candidato1 = 0, candidato2 = 0, candidato3 = 0, votonulo = 0, voto;
	char fin;
	
	
	printf ("Cuenta votos\n");
	printf ("Candidato 1: %s\n", c1);
	printf ("Candidato 2: %s\n", c2);
	printf ("Candidato 3: %s\n", c3);
	printf ("Ingrese el numero de candidato para añadir un voto, para terminar de contar, presione f\n");
	while (fin != 'f')
	{
		printf ("Ingrese voto: ");
		scanf ("%f", &voto);
		
		if (voto==1){
			candidato1++;
		}
		else if (voto==2){
			candidato2++;
		}
		else if (voto==3){
			candidato3++;
		}
		else{ 
			votonulo=votonulo+1;
		}
		while (getchar()!='\n');
		printf ("Continuar?:");
		scanf ("%c", &fin);
	}
	
	if(candidato1<candidato2 && (candidato2<candidato3 || candidato1==candidato2))
		printf ("El ganador es %s FELICIDADES!!\n", c3);
	else if(candidato1>candidato2 && (candidato2>candidato3 || candidato2==candidato3))
		printf ("El ganador es %s FELICIDADES!!\n", c1);
	else if(candidato1<candidato2 && (candidato2>candidato3 || candidato1==candidato3))
		printf ("El ganador es %s FELICIDADES!!\n", c2);
	else if(candidato1==candidato2 && candidato2==candidato3)
		printf ("ES UN EMPATE\n");
		
	int suma = candidato1 + candidato2 + candidato3 + votonulo;
	p1 = (candidato1 / suma) * 100;
	p2 = (candidato2 / suma) * 100;
	p3 = (candidato3 / suma) * 100;
	pn = (votonulo / suma) * 100;
	
	printf ("Votos de candidato 1 = %f", candidato1);
	printf ("(%f porciento de los votos)\n", p1);
	printf ("Votos de candidato 2 = %f", candidato2);
	printf ("(%f porciento de los votos)\n", p2);
	printf ("Votos de candidato 3 = %f", candidato3);
	printf ("(%f porciento de los votos)\n", p3);
	printf ("Votos nulos = %f", votonulo);
	printf ("(%f porciento de los votos)\n", pn);
	printf ("\n");
	printf ("Gracias por utilizar Cuenta votos");
	return 0;
}
	
	
		
		
			
		
	
			
		
