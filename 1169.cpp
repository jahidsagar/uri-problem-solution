#include <stdio.h>
#include <math.h>
int main()
{
   int i,j,x;
   scanf("%d",&i);
   for(j = 0; j< i;j++)
   {
       scanf("%d",&x);
       printf("%lld kg\n",(long long)(pow(2,x)/12000));
   }
   return 0;
}
