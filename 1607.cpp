#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int n,i,sum;
    cin>>n;
    string str1 , str2;
    while(n--)
    {
        sum = 0;
        cin>>str1>>str2;
        for(i = 0;str1[i] != '\0';i++)
        {
            if(str1[i] < str2[i])
            {
                sum += str2[i] - str1[i];
            }
            else if(str1[i] > str2[i])
            {
                sum += 'z' - str1[i] + str2[i] - 'a' +1;
            }
            else
                sum += 0;
        }
        cout<<sum<<endl;
    }
    return 0;
}
