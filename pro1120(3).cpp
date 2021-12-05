#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{	double a,b,c,p;
	/**/  double area;        /**/
	printf("Please input a,b and c: ");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b>c && a+c>b && /**/  b+c>a     /**/)
	{	p=(a+b+c)/2;
		area= sqrt(/**/   p*(p-a)*(p-b)*(p-c)           /**/); 
		printf("The area is %.4lf\n",area);
	}
	else
		printf("输入的三角形边长有误\n");
	return 0;
}
