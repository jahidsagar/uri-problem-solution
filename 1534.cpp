#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j <= n;j++)
            {
                if(i == j && i+j == n+1) cout<<"2";
                else
                    if(j == i) cout<<"1";
                else
                    if(j+i == n+1) cout<<"2";
                else
                    cout<<"3";
            }
            cout<<endl;
        }
    }
    return 0;
}
