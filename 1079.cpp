#include <stdio.h>
int main()
{
    int n;
    float a , b , c,avr;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%f %f %f",&a,&b,&c);
        a = a*2;
        b = b*3;
        c = c*5;
        avr = (a+b+c)/10;
        printf("%.1f\n",avr);
    }
    return 0;
}
