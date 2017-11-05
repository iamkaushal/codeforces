#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

int main()
{
    char str[101];
    scanf("%s",str);

    for(int i=1, n=strlen(str); i<n; i++)
    {
        if(islower(str[i]))
        {
            printf("%s", str);
            return 0;
        }
    }

    for(int i=0, n=strlen(str); i<n;i++)
    {
        if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }

        else  str[i] = toupper(str[i]);
    }

    printf("%s",str);

    return 0;
}
