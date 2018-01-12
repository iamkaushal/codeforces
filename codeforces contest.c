#include<stdio.h>
#include<stdlib.h>

#define min(a,b)  ((a) < (b) ? (a) : (b))
#define max(a,b)  ((a) > (b) ? (a) : (b))
//biggest  = max (max(a,b), max(c,d))
//smallest = min (min(a,b), min(c,d))

int main()
{
    int n;
    scanf("%d", &n);
    int x, y;

    int points = n;

    int first = 0;
    int second = 0;
    int third = 0;
    int forth = 0;

    while(n--)
    {
        scanf("%d%d", &x,&y);
        if(x>=0&&y>0) first++;
        else if(x<=0&&y>0) second++;
        else if(x<=0&&y<0) third++;
        else if(x>=0&&y<0) forth++;
    }

    //if(max( max(first, second), max(third, forth))< points-1) printf("No");
    if(((first+forth)) >=points - 1) printf("Yes");
    else if((second+third)>= points-1) printf("Yes");
    else printf("No");

    return 0;
}
