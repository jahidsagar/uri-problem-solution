#include <iostream>
#include <stdio.h>
#include <string.h>
#include <climits>
using namespace std;
int main()
{
    int i, j,l,m;
    char k[100];
    while(cin.getline(k,100))
    {
        l = m = 0;
        j = strlen(k);
        for(i = 0;i < j;i++)
        {
            if(k[i] == '*')
                {
                        if(l == 0)
                        {
                            cout<<"<b>";
                            l = 1;
                        }
                        else
                        {
                            cout<<"</b>";
                            l = 0;
                        }
                }
            else if(k[i] == '_')
            {
                if(m == 0)
                {
                    cout<<"<i>";
                    m = 1;
                }
                else
                {
                    cout<<"</i>";
                    m = 0;
                }
            }
            else cout<<k[i];
        }
        cout<<endl;
    }
    return 0;
}
