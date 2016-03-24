#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main()
{
    int tes , b;
    char name[5000];
    char att[5000];
    char sit[5000];
    int i , j , p , a , k;
    char d;
    scanf("%d",&tes);
    scanf("%c",&d);
    while(tes--)
    {
        scanf("%d",&b);
        scanf("%c",&d);
        gets(name);
        gets(att);
        i = 0;
        j = 0;
        k = 0;
        p = 0;
        a = 0;
        sit[0] = '\0';
        do{
            if(att[i] == 'P') p++;
            else if(att[i] == 'A') a++;
            else if(att[i] == ' ' || att[i] == '\0')
            {
                if(p < a*3)
                {
                    while(name[j] !=' ' && name[j] != '\0')
                    {
                        sit[k] = name[j];
                        k++;
                        j++;
                    }
                    sit[k] = name[j];
                    k++;
                    j++;
                    a = 0;
                    p = 0;
                }
                else{
                    while(name[j] != ' ' && name[j] != '\0')
                    {
                        j++;
                    }
                    j++;
                    a = 0;
                    p = 0;
                }
            }
            i++;
        }while(att[i-1] != '\0');
        sit[k - 1] = '\0';
        printf("%s\n",sit);
    }
    return 0;
}
