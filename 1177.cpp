#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n,j=0;
    cin>>n;
    for(int i =0;i < 1000;i++)
    {
        cout<<"N["<<i<<"] = "<<j<<'\n';
        if(j == (n-1))
        {
            j = 0;
        }
        else
            j++;
    }
    return 0;

}
