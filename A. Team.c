#include<stdio.h>
#include<stdlib.h>

int main()
{
    int tc;
    int sum=0;
    scanf("%d",&tc);
    while(tc--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);

        if((a+b+c)>1) sum++;

    }

    printf("%d",sum);

    return 0;
}
