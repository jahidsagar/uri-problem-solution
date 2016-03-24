#include <stdio.h>
int main()
{
   int i , j , a , b;
   a = 1 , b = 60;
   for(i= 0;;i++)
   {
       printf("I=%d J=%d\n",a,b);
       if(b == 0) break;
       a = a+3;
       b = b-5;
   }
   return 0;
}
