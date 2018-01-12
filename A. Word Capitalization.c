#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[1005];
    scanf("%s",str);

    str[0]= toupper(str[0]);

    printf("%s", str);

    return 0;
}
