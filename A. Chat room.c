#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[101];
    scanf("%s",str);
    char strTemp[6] = "hello";

    for(int i=0,k=0, n=strlen(str), m= strlen(strTemp); i<n;i++)
    {
        if(str[i]==strTemp[k]) k++;
        if(k==m)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");

    return 0;
}
