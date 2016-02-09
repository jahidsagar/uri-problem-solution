#include <iostream>
#include <stdio.h>
#include <string.h>
#include <climits>
#include <stdlib.h>
using namespace std;
int main()
{
    int c, sl1, sl2, sum, carry, k, a, b , i , j;
    char s1[100] , s2[100] ;int total[100];


    while(scanf("%s %s",s1,s2) == 2)
    {
        if(s1[0] == '0' && s2[0] == '0') break;

        sl1 = strlen(s1) ;  sl2 = strlen(s2);
        sum = 0; carry = 0; k = c = 0;
        for(i = sl1-1,j = sl2 -1;;i--,j--)
        {
            a = s1[i] - '0';
            b = s2[j] - '0';

            if(i < 0 ) a = 0;
            if( j < 0) b = 0;

            if(i < 0 && j <0 && carry == 0) break;

            sum = a+b+carry;
            total[c] = sum%10;
            carry = sum /10;
            c++;
        }
        for(i=c-1;i >=0;i--)
        {
            if(total[i]) cout<<total[i];
        }
        cout<<'\n';
    }
    return 0;
}
