#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,z=0,x=0,n,c;
    cin>>n;
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        cin>>c;
        if(c%2==0)
        {
            a[x]=c;
            x++;
        }
        else
        {
            b[z]=c;
            z++;
        }
    }
    
    sort(a,a+x);
    sort(b,b+z);
    
    
    
    
    for(i=0;i<x;i++)
    {
        cout<<a[i]<<endl;
    }
    for(i=z-1;i>=0;i--)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}
