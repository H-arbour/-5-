#include<stdio.h>
#include <conio.h>
int main()
{	int i, a[]={12,24,8,7,10,33,45,2,21,16};  
	int min, max;
	min=a[0];
	/**/   max=a[0]       /**/;
    for( i=1; i<10; i++)
	{	if(/**/ min>a[i]        /**/)
		{	min=a[i];
		}
		if(max<a[i])
		{	/**/  max=a[i]        /**/;
		}
	}
	printf("最大值为%d, 最小值为%d\n",max,min); 
    return 0;
}
