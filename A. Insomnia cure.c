#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    int sum=0;

    if(a==1||b==1||c==1||d==1) printf("%d",e);

    else
    {
       for(int i=1;i<=e;i++)
        {
            if(i%a==0) sum++;
            else if(i%b==0) sum++;
            else if(i%c==0) sum++;
            else if(i%d==0) sum++;
        }
        printf("%d",sum);

    }

    return 0;
}
