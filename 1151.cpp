#include <stdio.h>
int main()
{
    long long fib[46];
    fib[0] = 0;
    fib[1] = 1;
    int n,i;
    scanf("%d",&n);
    for(i = 2;i < n;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    for(i =0;i <n;i++)
    {
        if(i == (n-1)) printf("%d\n",fib[i]);
        else
        printf("%d ",fib[i]);
    }
    return 0;
}
