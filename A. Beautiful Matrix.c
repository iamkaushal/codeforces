#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[5][5];
    int x,y;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5;j++)
        {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] == 1)
            {
                x= i;
                y= j;
            }
        }
    }

    int res = abs(x-2) + abs(y-2);
    printf("%d", res);

    return 0;
}
