#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int tc,res=0;
    scanf("%d",&tc);
    while(tc--)
    {
        char str[4];
        scanf("%s",str);

        if(str[1]=='-') res--;
        else if(str[1]=='+') res++;

    }
    printf("%d",res);

    return 0;
}
