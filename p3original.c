#include<stdio.h>
int add (int a,int b);
int input();
void output(int sum);
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(sum);
}
int add (int a,int b)
{
  int add=a+b;
  return add;
}
int input()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  return a;

}
void output(int sum)
{
  printf("the sum is %d",sum);
}