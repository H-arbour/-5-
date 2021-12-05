#include<stdio.h>
#include <conio.h>
int main()
{	char  grade;
	/**/   int i;      /**/;
	for(i=1; i<=3; i++)
	{	scanf("%c",&grade);    
		switch(grade)
		{	case 'A':
				printf("优秀\n");
				break;
			/**/   case 'B' :    /**/ 
				printf("良好\n");
				break;
			case 'C':
				printf("中等\n");
				break;
			case 'D':
				printf("及格\n");
				break;
			case 'E':
				printf("不及格\n");
				break;
			/**/   default:   /**/
				printf("输入的等级段有误\n"); 			 
		} 
		getchar();
	}
	return 0;
}
