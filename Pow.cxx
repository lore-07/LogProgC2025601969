//Calcular el area total y el perimetro total de las siguientes figuras
#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, at, pt;
	//Asignacion de valores
	a= 3;
	b= 4; 
	pt= a + b + sqrt(pow(b, 2) + pow(a, 2));
	at= b*a/2;
	printf("Perimetro total= %f\n", pt);
	printf("Area total= %f\n", at);
	return 0;
}