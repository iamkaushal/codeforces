#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

    char string[101];
    scanf("%s",string);

    char sub[2] ="AQ" ;
    int count =0;

    int n = strlen(string);
    for(int i=0,j=0,k=0; i<n;i++)
    {
        if(string[i]=='Q')
        {
            for(int k=i;k<n;k++)
            {
                if(string[k] == 'A')
                {
                    for(int j=k; j<n; j++)
                    {
                        if(string[j] == 'Q') count++;
                    }

                }
            }

        }

    }



    printf("%d",count);



    return 0;
}
