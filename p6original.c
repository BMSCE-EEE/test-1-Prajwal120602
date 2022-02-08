#include<stdio.h>
int input_n();
int sum_n(int n);
void output(int n,int sum);
int main()
{
  int n=0,sum=0;
  n=input_n();
  sum=sum_n(n);
  output(n,sum);
}
int input_n()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i,sum=0;
  for(i=0;i<=n;i++)
  sum=sum+i;
  return sum;
}
void output(int n,int sum)
{
  int i;
  for(i=1;i<=n;i++)
  {
    printf("%d",i);
    if(i<n)
    printf("+");
  }
  printf(" is %d\n",sum);
  
}
