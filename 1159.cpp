#include <stdio.h>
int main()
{
    int n,sum,k;
    while(scanf("%d",&n) == 1 && n != 0)
    {
        sum = k = 0;
        while(1)
        {
            if(k == 5) break;
            if(n%2 == 0)
            {
                sum += n;
                n++;
                k++;
            }
            n++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
