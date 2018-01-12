#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    int sum= 0;
    int sum1=0, sum2=0, sum3=0, sum4=0, remtemp=0 , temp =0;

    for(int i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
        if(arr[i]==1) sum1++;
        if(arr[i]==2) sum2++;
        if(arr[i]==3) sum3++;
        if(arr[i]==4) sum4++;

    }

    if(sum3 >= sum1) sum1 = 0;
    else sum1 -= sum3;

    remtemp = sum2 % 2;
    sum2 = sum2/2;

    if(remtemp>=sum1) sum1 =0;
    else sum1 -= remtemp *2;

    if(sum1%4) temp = 1;

    sum1 = sum1/4;

    int res = sum1 + sum2 + sum3 + sum4 + remtemp+ temp;
    printf("%d",res);
    return 0;
}
