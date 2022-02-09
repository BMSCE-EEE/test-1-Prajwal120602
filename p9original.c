//compare string
#include<stdio.h>
#include<string.h>
void input_two_string(char a[],char b[]);
int strcmp_c(char a[],char b[]);
void output(char a[],char b[],int result);
int main()
{
  int result;
  char a[50],b[50];
  input_two_string(a,b);
  result=strcmp(a,b);
  output(a,b,result);
  return 0;
}
void input_two_string(char a[],char b[])
{
  printf("enter 1st string\n");
  scanf("%s",a);
  printf("enter 2nd string\n");
  scanf("%s",b);
}
int strcmp_c(char a[],char b[])
{
  int result;
  result=strcmp_c(a,b);
  return result;
}
void output(char a[],char b[],int result)
{
  if(result>0)
  { 
    printf("%s is greater than %s\n",a,b);
  }
  else if(result==0)
  {
    printf("%s is equal to %s\n",a,b);
  }
  else
  {
    printf("%s is greater than %s\n",b,a);
  }
}

