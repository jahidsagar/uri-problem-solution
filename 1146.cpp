#include <stdio.h>
int main()
{
    int a,i;
    while(scanf("%d",&a) == 1)
    {
        if(a == 0) break;

            for(i = 1 ; i <=a ;i++)
    {
        printf("%d",i);
        if(i != a) printf(" ");
    }
    printf("\n");
    }
    return 0;
}
