#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int compare(void const *a , void const *b)
{
    const char *aa = (const char *)a;
    const char *bb = (const char *)b;
    return strcmp(aa,bb);
}

int main()
{
    int n, flag, i;
    char all[27],brkfst[27],lnch[27];

    scanf("%d%*c",&n);

    for(int j = 0;j < n;j++)
    {
        flag = 0;

        cin.getline(all,27);
        cin.getline(brkfst,27);
        cin.getline(lnch,27);

        strcat(brkfst,lnch);

        qsort(all,strlen(all),sizeof(char),compare);
        qsort(brkfst,strlen(brkfst),sizeof(char),compare);
        
        for(i = 0;i < strlen(brkfst);i++)
        {
            if(!strchr(all,brkfst[i]))
            {
                cout<<"CHEATER";
                flag = 1;
                break;
            }
        }
        for(i = 0;i < strlen(all);i++)
        {
            if(flag == 1) break;
            if(!strchr(brkfst,all[i]))
            {
                cout<<all[i];
            }
        }
        printf("\n");
    }
    return 0;
}
