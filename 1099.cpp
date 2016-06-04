#include <stdio.h>
int main()
{
    int n,a,b,i,sum;
    scanf("%d",&n);
    while(n--)
    {
        sum = 0;
        scanf("%d %d",&a,&b);
        if(a > b)
        {
            int k = a;
            a = b;
            b = k;
        }
        for(i = a+1;i <b ;i++)
        {
            if(i%2 != 0) sum +=i;
        }
        printf("%d\n",sum);
    }
    return 0;
}
