#include <stdio.h>
int main()
{
	float x, y, z;
	x=2;
	y=4;
	z= (float)1/x+ ((x+y)/3)+(2*(float)x/y);
	printf("z= %f\n", z);
	return 0;
}