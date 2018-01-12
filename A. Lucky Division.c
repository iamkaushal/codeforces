#include<stdio.h>
#include<stdlib.h>

int isLucky(int i);

int main()
{
    int n ;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(isLucky(i))
        {
            if(n%i==0)
            {
                printf("YES");
                return 0;
            }
        }
    }

    printf("NO");
    return 0;
}

int isLucky(int i)
{
    while(i!=0)
        {
            int rem = i%10;
            i = i/10;
            if(rem != 4 && rem!=7) return 0;
        }
        return 1;
}
