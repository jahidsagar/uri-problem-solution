#include <stdio.h>
int main()
{
    int  n,i,a,b,c = 1,j;
    scanf("%d%d",&n,&j);
    if(n > j)
    {
        int k = n;
        n = j;
        j = k;
    }
    b = 0;
    for(a = 1;a <= j;a++)
    {
        b++;
        printf("%d",a);
        if(b == n)
        {
            printf("\n");
            b = 0;
        }
        else
            printf(" ");
    }
    return 0;
}
