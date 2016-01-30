#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string k;
    while(n--)
        {
            cin>>k;
            int l = k.length();
            if(l == 5) cout <<"3"<<endl;
            else
                if(k[0] == 't' && k[2] == 'o' || k[0] == 't' && k[1] == 'w' || k[1] == 'w' && k[2] == 'o')
                cout<<"2"<<endl;
            else
                cout<<"1"<<endl;
        }
    return 0;
}
