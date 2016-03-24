#include <stdio.h>
int main()
{
    int n = 100, co = 0; float k;
    while(n--)
    {
        scanf("%f",&k);
        if(k >10)
        {
            co++;
            continue;
        }
        else
            printf("A[%d] = %.1f\n",co,k);

            co++;
    }
    return 0;
}
