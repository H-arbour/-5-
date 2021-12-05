#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{	char str[80];
	int i=0, length;
	gets(str);
	/**/ length=strlen(str); /**/
	while(i<length)
	{	if(/**/ str[i]>=48 && str[i]<=57 /**/ || str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
			i++;
		else
			/**/ break; /**/;
	}
	if(i==length)
		printf("true\n");
	else
		printf("false\n");
	return 0;
}
