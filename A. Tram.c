#include<stdio.h>
#include<stdlib.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    int tram =0, min=0;
    while(tc--)
    {
        int down, up;
        scanf("%d%d", &down, &up);

        tram = tram +up - down;
        if(tram>min) min= tram;
    }

    printf("%d", min);
    return 0;
}
