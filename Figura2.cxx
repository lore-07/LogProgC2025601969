#include <stdio.h>
#include <math.h>
int main()
{
    float pi, l, h, pt, at;
    pi= 3.1416;
    l= 7;
    h= sqrt(pow(l, 2)+pow(l*3, 2));
    pt= (((pi*(l*3))/2))+(h*2)+(l*4)+(3*l);
    at= (pi*(pow(3*l/2, 2))/2)+((((l*3)+l)*(3*l))/2)+((3*l)*l);
    printf("El perimetro total es: %f\n", pt);
    printf("El área total es: %f\n", at);
    return 0;
}