#include <iostream>
#include <stdio.h>
int main()
{
    int i,j;
    double l,sum =0.0;
    char m;
    std::cin>>m;
    double k[12][12];
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
           std::cin>>k[i][j];
           if(j > 11-i)
            sum += k[i][j];
        }
    }
    if(m == 'S')
            printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",sum/66.00);

        return 0;
}
