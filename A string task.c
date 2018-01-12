#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%s",&str);

    for(int i=0,n= strlen(str); i<n;i++)
    {
        if(str[i]!= 'a' && str[i]!= 'e' && str[i]!= 'i' && str[i]!= 'o'
            && str[i]!= 'u' && str[i]!= 'y' && str[i]!= 'A' && str[i]!= 'E'
             && str[i]!= 'I' && str[i]!= 'O' && str[i]!= 'U' && str[i]!= 'Y' )
        {
            printf(".%c",tolower(str[i]));
        }
    }

    return 0;
}
