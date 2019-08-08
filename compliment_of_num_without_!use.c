


#include <stdio.h>

int main()
{
    int x=0;
int m=((x>>31)&1)|((((~x+1)>>31)&1))^1;

    printf("%d",m);

    return 0;
}
