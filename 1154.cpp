#include <stdio.h>
int main()
{
    int n , m = 0, sum=0;
    while(scanf("%d",&n) == 1 && n >= 0)
    {
        sum += n;
        m++;
    }
    printf("%.2f\n",(float)(sum)/(float)(m));
    return 0;
}
