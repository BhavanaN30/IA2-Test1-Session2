#include <stdio.h>
typedef struct _triangle
{
  float base, altitude, area;
} Triangle;
int input_n()
{
  int n;
  printf("How many triangles will you enter:\n");
  scanf("%d", &n);
  return n;
}
Triangle input_triangle()
{
  Triangle a;
  printf("Enter the base, altitude of a triangle:\n");
  scanf("%f%f", &a.base, &a.altitude);
  return a;
}
void input_n_triangles(int n, Triangle t[n])
{
  for (int i = 0; i < n; i++)
  {
    t[i] = input_triangle();
  }
}
void find_area(Triangle *t)
{
  t->area = 0.5 * t->base * t->altitude;
}
void find_areas(int n, Triangle t[n])
{
