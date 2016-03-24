#include <iostream>
#include <set>
#include <stdio.h>
#include <sstream>

using namespace std;

int main()
{
    int a , b , i , j;
    char num[101];
    char change[101];
    while(cin>>a)
    {
        scanf("%s",num);
        if(a == 0 && num[0] == '0') break;

        int zero = 0;
        int cont = 0;
        i = j = 0;
        while(true)
        {
            if(num[i] == '\0') break;
            else if(num[i] == a+48) i++;
            else {
                change[j] = num[i];
                if(j == zero) cont++;
                if(num[i] == '0') zero++;
                j++;
                i++;
            }
        }
        change[j] = '\0';
        if(j == 0 || j == zero) printf("0\n");
        else if(cont > 0)
        {
            for(i = cont-1; change[i] != '\0';i++)
            {
                printf("%d",change[i]-48);
            }
            printf("\n");
        }
    }
    return 0;
}
