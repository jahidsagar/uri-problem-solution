#include <stdio.h>
#include <math.h>
int main()
{
    int n,sum,j; long long k;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld",&k);
        j = 0;
        for(sum = 2;sum <=sqrt(k);sum++)
        {
            if(k%sum == 0)
            {
                j++;
                break;
            }
        }
        if(k == 0 || k == 1 || j >0)
            printf("%lld nao eh primo\n",k);
        else
            printf("%lld eh primo\n",k);
    }
    return 0;
}
