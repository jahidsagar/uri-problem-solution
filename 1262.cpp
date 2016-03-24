#include <iostream>
#include <set>
#include <stdio.h>
#include <sstream>

using namespace std;

int main()
{
    char s[51];
    int n , procs , clock;
    while(scanf("%s",s) != EOF)
    {
        cin>>n;
        procs = clock = 0;
        for(int i = 0;s[i] != '\0';i++)
        {
            if(s[i] == 'W')
            {
                clock++;
                if(procs > 0)
                {
                    clock++;
                    procs = 0;
                }
            }
            else
            {
                procs++;
                if(procs == n){
                    clock++;
                    procs = 0;
                }
            }
        }
        if(procs > 0) clock++;
        cout<<clock<<endl;
    }
    return 0;
}
