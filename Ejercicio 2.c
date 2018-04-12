#include <stdio.h>

int main()
{
	int cuenta, cuentaiva, propina, amigos, cuota;
	printf ("¿Con cuantos amigos salio Pepe?\n");
	scanf ("%d", &amigos);
	//hay que considerar a Pepe en el grupo
	amigos = amigos + 1;
	printf ("¿Cual fue el valor de la cuenta?\n");
	scanf ("%d",&cuenta);
	cuentaiva = cuenta + (cuenta * 0.19);
	propina = cuentaiva * 0.1;
	cuota = (cuentaiva + propina) / amigos;
	printf ("La cuenta final es de %d\n", cuentaiva);
	printf ("Y la propina es %d\n", propina);
	printf ("Cada amigo debera pagar %d pesos", cuota);
	return 0;
}

	
	
