#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int i , j;
    double sum = 0.0;
    double k[12][12];
    char c;
    cin>>c;
    for(i =0;i<12;i++)
    {
        for(j = 0;j <12;j++)
        {
            cin>>k[i][j];
            if(j < i && (j+i) > 11)
            {
                sum += k[i][j];
            }
        }
    }
    if(c == 'S') printf("%.1f\n",sum);
    else printf("%.1f\n",sum/30.00);

    return 0;
}
