#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[101];
    scanf("%s",str);

    char strTemp[8] = "1000000";

    for(int i=0,k=0, n =strlen(str), m = strlen(strTemp); i<n;i++)
    {
        if(str[i]==strTemp[k]) k++;
        if(k==m)
        {
            printf("yes");
            return 0;
        }
    }
    printf("no");

    return 0;
}
