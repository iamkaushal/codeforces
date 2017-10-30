#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[101];

    scanf("%s",str);

    for (int i=0, n= strlen(str); i<n; i++)
    {
        if( str[i]=='H' || str[i]=='Q'  || str[i] == '9')
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");

    return 0;
}
