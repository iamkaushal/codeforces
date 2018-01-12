#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str1[101];
    char str2[101];

    scanf("%s",str1);
    scanf("%s",str2);

    for(int i=0,n=strlen(str1); i<n; i++)
    {
        if(str1[i]!=str2[n-i-1])
        {
            printf("NO");
            return 0;
        }
    }

    printf("YES");

    return 0;
}
