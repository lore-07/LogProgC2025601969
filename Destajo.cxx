#include <stdio.h>
int main()
{
	int horas;
	float sbruto, sneto, desc;
	float PAGO= 100;
	float ISR= 0.1;
	printf("Horas laboradas: ");
	scanf("%d", &horas);
	sbruto= horas*PAGO;
	printf("El salario bruto es: %f\n", sbruto);
	desc= sbruto*ISR;
	printf("El descuento que se debe hacer es: %f\n", desc);
	sneto= sbruto-desc;
	printf("El salario neto es: %f", sneto);
	return 0;
}