#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,j;
    long long led;
    cin>>n;
    char digit[101];
    while(n--)
    {
        led = j = 0;
        cin>>digit;
        while(1)
        {
            if(digit[j] == '\0') break;
            if(digit[j] == '0') led += 6;
            if(digit[j] == '1') led += 2;
            if(digit[j] == '2') led += 5;
            if(digit[j] == '3') led += 5;
            if(digit[j] == '4') led += 4;
            if(digit[j] == '5') led += 5;
            if(digit[j] == '6') led += 6;
            if(digit[j] == '7') led += 3;
            if(digit[j] == '8') led += 7;
            if(digit[j] == '9') led += 6;
            j++;
        }
        cout<<led<<" leds"<<endl;
    }
    return 0;
}
