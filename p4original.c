/*comparing three numbers using pass by value*/
#include<stdio.h>
int input()
{
  int a;
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if(a>b&&a>c);
  return a;
  else if(b>a&&b>c);
  return b;
  else if(c>a&&c>b);
  return c;
}
void output(int result)
{
printf("%d is the greatest",result);
}
int main()
{
  int a,b,c,result;
  printf("enter three numbers\n");
  a=input();
  b=input();
  c=input();
  result=cmp(a,b,c);
  output(result);
  return 0;
}
