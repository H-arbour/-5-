#include<stdio.h>
#include <conio.h>
int main()
{	char  grade;
	/**/   int i;      /**/;
	for(i=1; i<=3; i++)
	{	scanf("%c",&grade);    
		switch(grade)
		{	case 'A':
				printf("����\n");
				break;
			/**/   case 'B' :    /**/ 
				printf("����\n");
				break;
			case 'C':
				printf("�е�\n");
				break;
			case 'D':
				printf("����\n");
				break;
			case 'E':
				printf("������\n");
				break;
			/**/   default:   /**/
				printf("����ĵȼ�������\n"); 			 
		} 
		getchar();
	}
	return 0;
}
