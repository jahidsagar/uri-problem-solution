#include <stdio.h>
int main()
{
    int n , k,sum;
    long long i;
    scanf("%d",&n);
    while(n--)
    {
        k =1; sum = 0;
        scanf("%lld",&i);
        while(k < i)
        {
            if(i%k == 0)
            {
                sum += k;
                k++;
            }
            else
                k++;
        }
        if(sum == i)
            printf("%lld eh perfeito\n",i);
        else
            printf("%lld nao eh perfeito\n",i);
    }
    return 0;
}
