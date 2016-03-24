#include <iostream>
 
using namespace std;
 
int main()
{
 
 
    int n;
    cin>>n;
    cin.ignore();
    string line;
    while(n-->0)
    {
        getline(cin,line);
 
        for(int i = (line.length()/2)-1; i>=0; i--)
            cout<<line[i];
 
        for(int i = line.length()-1; i>=line.length()/2; i--)
            cout<<line[i];
        cout<<endl;
 
 
 
 
    }
    return 0;
 
}1235
