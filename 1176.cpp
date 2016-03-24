#include <iostream>
using namespace std;
int main()
{
    int n,k,c=61;
    long long fib[c];
    fib[0] = 0;
    fib[1] = 1;
    cin>>n;
    for(int i =2;i <c;i++)
        {
            fib[i] = fib[i-1]+fib[i-2];
        }
    while(n--)
    {
        cin>>k;
        cout<<"Fib("<<k<<")"<<' '<<"="<<' '<<fib[k]<<endl;
    }
    return 0;
}
