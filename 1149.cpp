#include <stdio.h>
int main()
{
    int a , n;
    scanf("%d",&a);
    do
    {
        scanf("%d",&n);
    }while(n <= 0);
    int i,sum = 0;
    for(i = a;i < a+n;i++)
    {
       sum += i;
    }
    printf("%d\n",sum);
    return 0;
}
