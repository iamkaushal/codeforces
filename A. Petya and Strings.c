#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<string.h>

int main()
{
    char str1[101];
    char str2[101];

    scanf("%s",str1);
    scanf("%s",str2);

    if (!strcasecmp(str1,str2))
    {
        printf("0");
        return 0;
    }
    else
        for(int i=0, n=strlen(str1); i<n;i++)
        {
            if( tolower(str1[i]) > tolower(str2[i]) )
            {
                printf("1");
                return 0;
            }
            if( tolower(str1[i]) < tolower(str2[i]) )
            {
                printf("-1");
                return 0;
            }
        }



    return 0;
}
