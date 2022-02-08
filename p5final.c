//compare 3 number use 4 function by pass by referance
#include <stdio.h>
void input();
void smallest(int *,int *,int*);
void output();
 int a,b,c,r;
int main()
{
    input();
    smallest(&a,&b,&c);
    output();
    return 0;
}
void input()
{
    
     printf("enter the three number\n");
     scanf("%d %d %d",&a,&b,&c);
}
void smallest(int *x,int *y,int*z)
{
    
    if(*x<*y && *x<*z)
    {
        r=*x;
    }
    else if(*y<*z)
    {
        r=*y;
    }
    else
    {
        r=*z;
    }
}
void output()
{
    printf("smallest number is=%d",r);
   
}
