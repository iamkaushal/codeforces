#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[101];
    scanf("%s",&str);

    int hashtable[200]={0};

    for(int i=0, n=strlen(str);i<n;i++)
    {
        hashtable[str[i]]++;
    }

    int res=0;
    for(int i=0;i<200;i++)
    {
        if(hashtable[i]!=0) res++;
    }
    if(res%2==0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");

    return 0;
}
