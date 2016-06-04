#include <stdio.h>
int main()
{
    int n,b = 0,c = 0;
    long long a;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld",&a);
        if(a>=10 && a<=20) b++;
        else c++;
    }
    printf("%d in\n%d out\n",b,c);
    return 0;
}
