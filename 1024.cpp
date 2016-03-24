#include <stdio.h>
#include <string.h>

int main()
{
    char c[10000],d;
    int n;
    scanf("%d",&n);
    while(n--)
        {
            scanf(" %[^\n]",c);
            int i,len = strlen(c);

            for(i = 0;i <len;i++)
            {
                if(c[i] >= 65 && c[i] <= 90 || c[i] >= 97 && c[i] <= 122)
                c[i] = c[i]+3;
            }

            for(i = 0;i<len/2;i++)
            {
                d = c[i];
                c[i] = c[len-i-1];
                c[len-i-1] = d;
            }

            for(i = len/2;c[i] !='\0';i++)
            {
                c[i] = c[i] - 1;
            }

            printf("%s\n",c);
        }
        return 0;
}
