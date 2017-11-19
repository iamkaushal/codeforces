#include<stdio.h>
#include<stdlib.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int a[tc], b[tc];
    int max=0;
    int index = 0;
    for(int i=0;i<tc;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
        if(b[i]>max)
        {
            max= b[i];
            index = i;
        }
    }
    //printf("%d", max);

    int count = 0;

    for(int i=0;i<tc;i++)
    {
        for(int j=0; j<tc;j++)
        {
        if(b[i]<b[j] && a[i]>a[j])
        {
            count ++;
            break;
        }
        }

    }
    printf("%d",count);

    return 0;
}
