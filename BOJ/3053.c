#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>

int main()
{
	double r;
	scanf("%lf",&r);
	double oc,tc;
	oc=r*r*M_PI;
	tc=r*r*2;
	printf("%.6lf\n%.6lf",oc,tc);
	return 0;
}
