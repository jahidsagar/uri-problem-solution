#include <stdio.h>
int main()
{
    int n , c1 , r1 , s1,sum;
    c1 = r1 = s1 = sum = 0;
    int m;
    char c;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %c",&m,&c);
        sum += m;
        if(c == 'C') c1 += m;
        if(c == 'R') r1 += m;
        if(c == 'S') s1 += m;

    }
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",c1);
    printf("Total de ratos: %d\n",r1);
    printf("Total de sapos: %d\n",s1);
    printf("Percentual de coelhos: %.2f %%\n",(float)(c1)/(float)(sum) * 100.00);
    printf("Percentual de ratos: %.2f %%\n",(float)(r1)/(float)(sum) * 100.00);
    printf("Percentual de sapos: %.2f %%\n",(float)(s1)/(float)(sum) * 100.00);

    return 0;
}
