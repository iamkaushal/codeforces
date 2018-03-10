#include<stdio.h>
#include<stdlib.h>

int max(int a, int b);

int main ()
{
  int a, b, c;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  int ans = a+b+c;

  ans = max(ans, (a+b)*c);
  ans = max(ans, a*(b+c));
  ans = max(ans, a*b*c);

  printf("%d", ans);

  return 0;
}

int max(int a, int b)
{
  if(a>b) return a;
  else return b;
}
