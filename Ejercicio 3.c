#include <stdio.h>

int main()
{
	int preciotraje, descuento, preciofinal;
	
	printf ("EL HARAPIENTO DISTINGUIDO\n");
	printf ("\n");
	printf ("¿Cuanto cuesta el traje que desea comprar?\n");
	scanf ("%d",&preciotraje);
	
	if (preciotraje<=2500){
		preciofinal = preciotraje - (preciotraje * 0.08);
		descuento = preciotraje*0.08;
		printf ("El precio final de su traje es de %d\n", preciofinal);
		printf ("Tuvo un descuento de %d (8 porciento del valor original)", descuento);
	}
	else if(preciotraje>2500){
			preciofinal = preciotraje - (preciotraje * 0.15);
			descuento = preciotraje * 0.15;
			printf ("El precio final de su traje es de %d\n", preciofinal);
			printf ("Tuvo un descuento de %d (15 porciento del valor original)", descuento);
		}
	return 0;
}
