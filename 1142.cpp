#include <stdio.h>
int main()
{
    int  n,i,a,b,c = 0;
    scanf("%d",&n);
    for(a = 1;a <= n;a++)
    {
        c += 1;
         b =0;
        while(c)
        {
            printf("%d ",c);
            c++;
            b++;
            if(b == 3) break;

        }

        printf("PUM\n");
    }
    return 0;
}
