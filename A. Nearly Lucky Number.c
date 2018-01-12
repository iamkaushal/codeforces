#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int luckydigit=0, unluckydigit=0;
    for (int i=0, n=strlen(str); i<n;i++)
    {
        if(str[i]=='4'||str[i]=='7') luckydigit++;
    }

    if(luckydigit==4||luckydigit==7) printf("YES");
    else printf("NO");

    return 0;
}
