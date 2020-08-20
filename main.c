#include <stdio.h>
int main(void) {
  float area, b, h;
  printf("EnterB : ");
  scanf("%f", &b);
  printf("ENterH :" );
  scanf("%f",  &h);
  area = 0.5 * b * h;
  printf("Area is %.2f ", area);
  return 0;
}