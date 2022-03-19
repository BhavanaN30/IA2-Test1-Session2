#include<stdio.h>
int input_side()
{
  int a;
  printf("enter the side of the triangle:\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a, int b, int c)
{
  if (a!=b && b!=c && a!=c)
    return 0;
  else 
    return 1;
}
void output(int a, int b, int c, int isscalene)
{
  if (isscalene==0)
    printf("the enterd triangle is a scaline triangle\n");
  else
  printf("the entered triangle is not scaline triangle\n");
}
int main()
{
  int a,b,c,s;
  a=input_side();
  b=input_side();
  c=input_side();
  s=check_scalene(a,b,c);
  output(a,b,c,s);
  return 0;
}
