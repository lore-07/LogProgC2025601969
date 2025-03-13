//Algorithm 1
#include <stdio.h>
int main ()
{
    int numMuj, numHom;
    float DESC= 0.25, total;
    int COVER= 500;
    printf("Numero de mujeres en el grupo: ");
    scanf("%d", &numMuj);
    printf("Numero de hombres en el grupo: ");
    scanf("%d", &numHom);
    total= (numHom*COVER)+((numMuj*COVER)-(numMuj*COVER*DESC));
    printf("Resultado: %f", total);
    return 0;
}