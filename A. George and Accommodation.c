#include<stdio.h>
#include<stdlib.h>

int main()
{
    int tc, res=0;
    scanf("%d",&tc);
    while(tc--)
    {
        int a,b;
        scanf("%d %d",&a,&b);

        if(b-a >1) res++;
    }
    printf("%d",res);
    return 0;
}
