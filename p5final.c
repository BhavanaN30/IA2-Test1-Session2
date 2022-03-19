#include<stdio.h>
int input()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int gcd(int a, int b)
{
  int t;
  for(int i=1;i<=a && i<=b;i++)
    {
      if(a%i==0 && b%i==0)
        t=i;
    }
  return t;
}
void output(int a, int b, int gcd)
{
  printf("the hcf is %d\n",gcd);
}
int main()
{
  int a,b,g;
  a=input();
  b=input();
  g=gcd(a,b);
  output(a,b,g);
  return 0;
}
