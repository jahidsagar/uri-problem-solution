#include <iostream>
#include <stdio.h>
//using namespace std;
int main()
{
    int n,i,j;
    double l,sum =0.0;
    char m;
    std::cin>>n;
    std::cin>>m;
    double k[12][12];
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
           std::cin>>k[i][j];
           if(j == n)
            sum += k[i][j];
        }
    }
    if(m == 'S')
            printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",sum/12.00);

        return 0;
}
