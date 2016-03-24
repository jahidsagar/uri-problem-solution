#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n,m,j,k = 0,p =0;
    j= INT_MAX;
    cin>>n;
    while(n--)
    {
        cin>>m;
        if(m < j)
        {
            j = m;
            p = k;
        }
        k++;

    }
    cout<<"Menor valor: "<<j<<'\n';
    cout<<"Posicao: "<<p<<'\n';
    return 0;

}
