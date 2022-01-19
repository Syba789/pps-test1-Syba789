#include<stdio.h>
int input()
{
  int a;
  printf("enter two numbers\n");
  scanf("%d",&a);
  return a;
}
int add(int a,int b)
{
  int sum;
  sum=a+b;
  return sum;
}
int output(int a,int b,int sum)
{
  printf("sum of %d + %d is %d\n",a,b,sum);
  return sum;
}
int main()
{
  int x,y,z;
  x= input();
  y= input();
  z= add(x,y);
  output(x,y,z);
  return 0;
}