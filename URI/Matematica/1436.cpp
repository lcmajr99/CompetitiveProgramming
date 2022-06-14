#include <iostream>

using namespace std;

int main()
{
    int n,i,j,c,a,b;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>b;
            if(b%2==0)
            {
                c=(b/2)+1;
            }
            else
            {
                c=b/2;
            }
            for(j=0;j<b;j++)
            {
                cin>>a;
                if(j==c)
                {
                     cout<<"Case "<<i+1<<": "<<a<<endl;
                }
            }


        }
        return 0;
}
