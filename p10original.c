#include<stdio.h>
struct _complex
{
  float real,imaginary;
};
typedef struct _complex Complex;
Complex input_chelloa();
Complex input_chellob();
Complex add(Complex a, Complex b);
void output(Complex a,Complex b,Complex c);
int main()
{
  Complex a,b,c;
  a=input_chelloa();
  b=input_chellob();
  c=add(a,b);
  output(a,b,c);
  return 0;
  
}
Complex input_chelloa()
{
  Complex a;
  printf("enter a real part and imginary part for structure a \n");
  scanf("%f %f",&a.real,&a.imaginary);
    
  return a;
  
}
Complex input_chellob()
{
    Complex b;
    printf("enter a real part and imginary part for structure b \n");
    scanf("%f %f",&b.real,&b.imaginary);
    return b;
}
Complex add(Complex a,Complex b)
{
  Complex c;
  c.real=(a.real+b.real);
  c.imaginary=(a.imaginary+b.imaginary);
  return c;
}
void output(Complex a,Complex b,Complex c)
{
  printf("%0.0f+%0.0fi+%0.0f+%0.0fi is %0.0f+%0.0fi",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}