#include <stdio.h>
#include <math.h>
int main()
{
    float pi, at, pt, l;
    pi= 3.1416;
    l= 7;
    pt= ((pi*l)/2)+(17*((float)(1/5.0*l)))+(2*((float)(3/5.0*l)));
    at= ((pi*((pow(l/2, 2)))/2))+(l*((float)(3/5.0*l)+(2*((float)(1/5.0*l)))))+(((float)(1/5.0*l))*((float)(3/5.0*l))*2)+(2*(((float)(1/5.0*l))));
    printf("El perimetro total es: %f\n", pt);
    printf("El area total es: %f\n", at);
    return 0;
}