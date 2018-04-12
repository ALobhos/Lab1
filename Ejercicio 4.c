#include <stdio.h>
#include <stdlib.h>
int main()
{
	int tamanio, pago, kilos, precio;
	char tipo;
	
	printf ("¿Cuanto cuesta el kilo de uvas?\n");
	scanf ("%d", &precio);
	printf ("¿Cuantos kilos de uvas va a vender?\n");
	scanf ("%d", &kilos);
	while (getchar()!='\n');
	printf ("¿Que tipo de uva va a vender (A o B)?\n");
	scanf ("%c", &tipo);
	printf ("¿De que tamaño es la uva que vendera (1 o 2)?\n");
	scanf ("%d", &tamanio);
	
	if (tipo=='A' && tamanio==1){
		pago= precio * kilos + (kilos * 20);
		printf ("Su pago es de %d", pago);
	}
	else if (tipo=='A' && tamanio==2){
		pago= precio * kilos + (kilos * 30);
		printf ("Su pago es de %d", pago);
	}
	else if (tipo=='B' && tamanio==1){
		pago= precio * kilos - (kilos * 30);
		printf ("Su pago es de %d", pago);
	}
	else{
		pago= precio * kilos - (kilos * 50);
		printf ("Su pago es de %d", pago);
	}
	return 0;
}

		
	
