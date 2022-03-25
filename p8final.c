#include <stdio.h>
typedef struct _triangle
{
  float base, altitude, area;
} Triangle;
int input_n()//Enter the number of triangles
{
  int n;
  printf("Enter the number of triangles:\n");
  scanf("%d", &n);
  return n;
}
Triangle input_triangle()//Enter the base,altitude of a triangle
{
  Triangle t;
  printf("Enter the base, altitude of a triangle:\n");
  scanf("%f%f", &t.base, &t.altitude);
  return t;
}
void input_n_triangles(int n, Triangle t[n])//Enter the base,altitude of n triangle
{
  for (int i=0; i<n; i++)
  {
    t[i] = input_triangle();
  }
}
void find_area(Triangle*t)//calclate area of triangle
{
  t->area = 0.5*(t->base)*(t->altitude);
}
void find_areas_n(int n, Triangle t[n])////calculate area of n triangle
{
  for(int i=0;i<n;i++)
    {
      find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n,Triangle t[n])//find smallest among n triangle
{
  Triangle small;
  small=t[0];

for(int i=1,i<n,i++)
  {
  if(small.area>t[i].area)
  {
    small=t[i];
  }
  }
return small;
}
void output(int n,Triangle t[n],Triangle smallest)//print the smallest among n triangle
{
  for(int i=0;i<n-1;i++)
    {
      printf("smallest among %0.if,%0.if and\n",t[i].base,t[i].altitude);
    }
    printf("smallest among %0.if\nis\ntriangle with base =%0.if and altitude=%0.if having area=%0.if\n",t[n-1].base,t[n-1].altitude,smallest.base,smallest.altitude,smallest.area);
    }

  int main()
  {
    int n=input_n();
    Triangle t[n];
    input_n_triangles(n,t);
    find_areas_n(n,t);
    Triangle small=find_smallest_triangle(n,t);
    otput(n,t,small);
    return 0;
  }