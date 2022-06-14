#include <iostream>

using namespace std;

int main()
{
    int a,c,n,i,rest;
    char b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a==c)
        {
            rest=a*c;
        }
        else
        {
            if(b>='A' && b<='Z')
            {
                rest=c-a;
            }
            else
            {
                if(b>='a' && b<= 'z')
                {
                    rest=c+a;
                }
            }
        }
        cout<<rest<<endl;
    }

    return 0;
}