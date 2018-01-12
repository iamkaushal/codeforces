#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x;
    scanf("%d",&x);
    int step = 0;

    step = x/5;
    x = x%5;
    step = step + x/4;
    x = x%4;
    step = step + x/3;
    x = x%3;
    step = step + x/2;
    x = x%2;
    step += x;

    printf("%d", step);


    return 0;
}
