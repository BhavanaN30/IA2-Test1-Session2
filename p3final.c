#include<stdio.h>
int input_number()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int is_composite(int n)
{
  //int s=0;
  for (int i=2;i<n;i++)
  {
    if((n%i)==0)
    {
      return 0;
      break;
    }
      //s++;
  }
  return /*s*/1;
}
void output(int n, int composite)
{
  if (composite==0)
    printf("%d is a composite number\n",n);
  else 
    printf("%d is not a composite number\n",n);
}
int main()
{
  int n,cmp;
  n=input_number();
  cmp=is_composite(n);
  output(n,cmp);
  return 0;
}
