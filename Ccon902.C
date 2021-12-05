#include <stdio.h>
#include <conio.h>

void add_n(int *x, int *y, /**/ int n     /**/) 
{
  *x=*x+n;
  *y=/**/ *y   /**/ +n;
}

int main()
{
  int a,b,n;
  printf("Input a,b,n= ");
  scanf("%d,%d,%d",&a,&b,&n);
  printf("\nOriginal: a=%d  b=%d  n=%d\n",a,b,n);
  add_n(/**/ &a   /**/, &b, n);
  printf("\nNow: a=%d  b=%d\n",a,b);
  getch();
  return 0;
}
