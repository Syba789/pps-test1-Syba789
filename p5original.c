/*comparing three numbers using pass by reference*/
#include<stdio.h>
void input(int *a,int *b,int *c)
{
  printf("enter three numbers\n");
  scanf("%d%d%d",a,b,c);
}
void cmp(int a,int b,int c,int *large)
{
*large=0;
if(a>b && a>c)
*large=a;
else if(b>a && b>c)
*large=b;
else
*large=c;
}
void output(int large)
{
  printf("%d is the greatest\n",large);
}
int main()
{
  int a,b,c,large;
  input(&a,&b,&c);
  cmp(a,b,c,&large);
  output(large);
  return 0;
}