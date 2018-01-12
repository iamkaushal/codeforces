#include<stdio.h>
#include<stdlib.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    int suma =0, sumb=0, sumc=0;
    int a[tc], b[tc], c[tc];

    for (int i=0; i<tc;i++)
    {
        scanf("%d %d %d", &a[i],&b[i],&c[i]);
        suma = suma + a[i];
        sumb = sumb + b[i];
        sumc = sumc + c[i];
    }
    if(suma==0&&sumb==0&&sumc==0) printf("YES");
    else printf("NO");

    return 0;
}
