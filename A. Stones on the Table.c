#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str[n+1];

    scanf("%s",str);

    int sum=0;
    for (int i=0, n=strlen(str); i+1<n; i++)
    {
        if(str[i]==str[i+1]) sum++;
    }
    printf("%d",sum);

    return 0;
}
