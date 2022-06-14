#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    int z[n];
    for(i=1;i<=n;i++)
    {
        z[i]=0;
    }
    for(i=1;i<=n-1;i++)
    {
        cin>>j;
        z[j]++;
    }
    for(i=1;i<=n;i++)
    {
        if(z[i]==0)
        {
            cout<<i<<endl;
        }

    }

    return 0;
}