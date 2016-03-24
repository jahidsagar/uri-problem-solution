#include <iostream>
#include <stdio.h>
#include <string.h>
#include <climits>
using namespace std;
int main()
{
    int i , j , k;
    char a[50] , b[50],c[50];
    int test;
    cin>>test;
    while(test--)
    {
        k = j = 0;
        cin>>a>>b;
        for(i = 0;i < 50;i++)
        {
            if(a[i] == '\0') k = 1;
            if(b[i] == '\0') j = 1;
            if(k == 1 && j == 1) break;
            if(k == 0) cout<<a[i];
            if(j == 0) cout<<b[i];
        }
        cout<<endl;
    }
}
1238
