#include <stdio.h>
#include <conio.h>
#include <math.h>

double fun(int x)
{	int i,/**/ sum=0 /**/;
	for(i=2; i<=x; i++)
		if(/**/ (i%3)==1 /**/)
			sum+=i;
	return sqrt(sum);
}

int main()
{	int y;
	double k;
	do
  {	printf("Input y(y>=2 and y<=100):");
		scanf("%d",&y);
	}while(y<2 || y>100);
	k=/**/ fun(y) /**/;
	printf("fun(%d)=%.4lf\n",y,k);    
	return 0;
}
