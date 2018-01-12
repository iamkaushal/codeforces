#include<stdlib.h>
#include<stdio.h>

int main()
{
    int n ;
    scanf("%d",&n);
    while(n--)
    {
        int a;
        scanf("%d",&a);

        int temp = a;

        if(temp%7 == 0) printf("YES\n");
        else if(temp%3 == 0) printf("YES\n");

        else if((temp%7)%3 ==0 ) printf("YES\n");
        else if((temp%3)%7==0) printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}
