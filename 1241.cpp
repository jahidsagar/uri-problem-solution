#include <iostream>
#include <stdio.h>
#include <cstring>
#include <climits>
using namespace std;
int main()
{
    int i , j, k,q,r,test;
    char num1[1001] , num2[1001];
    cin>>test;
    for(int g = 1;g <= test;g++)
    {
        cin>>num1>>num2;
        q = 0;
        for(j = strlen(num2), k = strlen(num1);j >=0;j--,k--)
        {
            if(num1[k] == num2[j]) q++;
            else break;
        }
        if(q == strlen(num2)+1) cout<<"encaixa"<<endl;
        else cout<<"nao encaixa"<<endl;
    }
    return 0;
}
