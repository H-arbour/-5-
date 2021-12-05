#include <stdio.h>
#include <conio.h>
#include <string.h>

void subcpy(char a[],int at,int len,char b[])
{
  int i,j;
  j=/**/ 0    /**/;
  for(i=at-1;i<at-1+len;i++)
  {
     b[j]=/**/ at-1     /**/ ;
     j++;
  }
  b[j]='\0';
}

int main()
{
  char a[20]="abcMNB236!", b[20];
  int at,len,k;
  k=strlen(a);
  do
  {
    printf("Input at,len(at>0, len>0,at+len-1<=strlen): ");
    scanf("%d,%d",&at,&len);
  }while( at<=0 || len<=0 || at+len-1>k);
  subcpy(a, at, len,/**/  b   /**/);
  printf("String a: %s\n",a);
  printf("String b: %s\n",b);
  getch();
  return 0;
}
	
