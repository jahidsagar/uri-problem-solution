#include <stdio.h>
int main()
{
   int i , j , a , b,m;
   a = 1; b = 7; m = 0;
   while(1)
   {
       ++m;
       printf("I=%d J=%d\n",a,b--);
       if(m == 3 && a == 9) break;
       else if(m == 3)
       {
           a = a+2; b = 7;
           m = 0;
       }

   }
   return 0;
}
