#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        char str[100];
        scanf("%s",&str);
        int n = strlen(str);
        if (n>10)
            printf("%c%d%c\n",str[0],n-2,str[n-1]);
        else printf("%s\n",str);
    }

    return 0;
}
