#include<stdio.h>
#include<stdlib.h>

int main()
{
    char arr[101];

    scanf("%s", arr);


    char temp[8] = "11111111";
    char temp2[8] = "00000000";
    int n = strlen(arr);
    int j=0;
    int j2=0;
    int count =0;
    int count2 = 0;
    for(int i= 0; i<n; i++)
    {
        if(arr[i]==temp[j])
        {
            j++;
            count++;
        }
       else
        {
            j=0;
            count =0;
        }


        if(arr[i]==temp2[j2])
        {
            j2++;
            count2++;
        }
        else
        {
            j2=0;
            count2 =0;
        }

    if(count==7)
    {
        printf("YES");
        return 0;
    }

    if(count2==7)
    {
        printf("YES");
        return 0;
    }

    }



    printf("NO");

    return 0;
}
