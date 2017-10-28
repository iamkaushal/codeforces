#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int wm;
    scanf("%d",&wm);

    if(wm%2==0 && wm!=2) printf("YES");
    else printf("NO");

    return 0;
}
