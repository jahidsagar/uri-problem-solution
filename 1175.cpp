#include <stdio.h>
int main()
{
    int arr[20];
    int i,j,k = 19;
    for(i = 0;i <20;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<20/2;i++)
    {
        j = arr[i];
        arr[i] = arr[k];
        arr[k] = j;
        k--;
    }
    for(i = 0;i <20;i++)
    {
        printf("N[%d] = %d\n",i,arr[i]);
    }
    return 0;
}
