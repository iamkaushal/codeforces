#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char arr[102];

    //scanf("%s", arr[0]);
    gets(arr);

    int sum1=0;
    int sum2=0;
    int sum3=0;
    int n= strlen(arr);

    printf("%d", n);

    for(int i=0; i<n;i++)
    {
        if(arr[i]=='1') sum1++;
        if(arr[i]=='2') sum2++;
        if(arr[i]=='3') sum3++;
    }

    printf("%d %d %d", sum1, sum2, sum3);

    for(int i=0; i<n;)
    {
        while(sum1--)
        {
            if(i%2==0) arr[i] = '1';
            else arr[i] = '+';
            i++;
        }

        while(sum2--)
        {
            if(i%2==0) arr[i] = '2';
            else arr[i] = '+';
            i++;
        }

        while(sum3--)
        {
            if(i%2==0) arr[i] = '3';
            else arr[i] = '+';
            i++;
        }

    }

    printf("%s", arr);


    return 0;
}
