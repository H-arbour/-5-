#include <stdio.h>
#include <conio.h>
#include <math.h>

int fun(double x,/**/ double a, double b,double c /**/)
{	double r=a*x*x+b*x+c;
	if(fabs(r)<1.0E-5) 
		return 1 ;
	else
		return /**/ 0 /**/ ;
}

int main()
{	double x,a=1,b=-5,c=6;
	printf("Input x:");
	scanf("%lf",&x);
	if(/**/ fun(x,a,b,c)==1 /**/)
		printf("%.3f is the root!\n",x);
	else
		printf("%.3f is not the root!\n",x);
	return 0;
}
