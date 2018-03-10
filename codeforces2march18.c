#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a;
  scanf("%d", &a);

  int b;
  scanf("%d", &b);

  int c = (a+b)/2;

  int stepa = abs(a-c);
  int stepb = abs(c-b);

  stepa = stepa*(stepa+1)/2;
  stepb = stepb*(stepb+1)/2;

  printf("%d", stepa+stepb);


  return 0;
}
