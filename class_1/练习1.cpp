#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1,y=1,i,z;
    for(i=1;i<12;i++)
    {
        z = x+y;
        x = y;
        y = z;
    }
    printf("һ����� %d������",y);

}
