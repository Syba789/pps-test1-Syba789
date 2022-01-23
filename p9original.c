#include<stdio.h>
void input_two_string(char *a,char *b)
{
  printf("enter two strings\n");
  scanf("%s%s",a,b);
  return ;
}
int strcmpp(char *a,char*b)
{
  int str1,str2,n;
  for(int i=0;i<n;i++)
  {
    str1+=str1+a[i];
    str2+=str2+a[i];

  }
  if (str1>str2)
  return 1;
  if (str1==str2)
  return 0;
  if (str1<str2)
  return -1;
}
void ouput(char *a,char*b, int result)
{
  if (result==1)
  printf("%s if greater than %s\n",a,b);
  if (result==0)
  printf("%s is equal to %s\n",a,b);
  if (result==-1)
  printf("%s is lesser than %s\n",a,b);
}
int main()
{
  char a[100],b[100];
  int result;
  input_two_string(a,b);
  strcmpp(a,b);
  ouput(a,b,result);
  return 0;
}
