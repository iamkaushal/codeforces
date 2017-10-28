#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);

    int arr[n],res=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n;i++)
    {
        if(arr[i]>=arr[k-1]&& arr[i]>0) res++;
    }

    printf("%d",res);

    return 0;
}
