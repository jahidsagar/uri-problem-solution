#include <stdio.h>
int main()
{
    int n , s,t,k,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&s);
        k = sum = 0;

        while(1)
    {
      if(k == s) break;

      if(n%2 != 0)
      {
          sum += n;
          n++;
          k++;
      }
      else
        n++;
    }

    printf("%d\n",sum);

    }

    return 0;
}
