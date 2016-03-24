#include <stdio.h>
int main()
{
    int arr[10],i,k;
    for(i = 0 ;i<10;i++)
    {
        scanf("%d",&k);
        if(k <= 0)
        {
            arr[i] = 1;
        }
        else
            arr[i] = k;
    }
    for(i = 0;i < 10;i++)
    {
        printf("X[%d] = %d\n",i,arr[i]);
    }
    return 0;
}
