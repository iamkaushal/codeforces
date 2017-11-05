#include<stdio.h>
#include<stdlib.h>

int main()
{
    int k,n,w;
    scanf("%d %d %d", &k,&n,&w);

    int res = (k*(w)*(w+1)/2) - n;
    if(res>=0) printf("%d",res);
    else printf("0");
    return 0;
}
