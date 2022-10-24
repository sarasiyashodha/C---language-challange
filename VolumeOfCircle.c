#include <stdio.h>

const float pi = 3.14;

int main()
{
	double v, r=7, h = 10;
	
	v = pi * r * r * h;
	
	printf("The volume is: %lf\n",v);
	
	return 0;
}