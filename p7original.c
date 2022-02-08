#include<stdio.h>
int input_array_size();
void input_array(int n,int a[]);
int sum_n_arrays(int n,int a[]);
void out_put(int n,int a[],int sum);
int main()
{
  int n,sum,a[10];
  n=input_array_size();
  input_array(n,a);
  sum=sum_n_arrays(n,a);
  out_put(n,a,sum);
}
int input_array_size()
{
  int n;
  printf("enter a total number of elements\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[])
{
  int i;
  printf("enter numbers\n");
  for(i=0;i<n;i++)
    {  
        scanf("%d",&a[i]);
    }
}
int sum_n_arrays(int n,int a[])
{
  int i,sum=0;
  //printf("Entered in sum fun\n");
  for(i=0;i<n;i++)
  sum=sum+a[i];
  return sum;
}
void out_put(int n,int a[],int sum)
  {
      int i;
      for(i=0;i<n;i++)
      {
          printf("%d",a[i]);
          if(i<n-1)
          printf("+");
      }
    printf(" is %d",sum);
  }