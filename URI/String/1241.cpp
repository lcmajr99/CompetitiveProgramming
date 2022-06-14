#include <iostream>

using namespace std;

int main()
{
    string a,b;
    int i,n,j,d,f,k,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        d=b.length();
        f=a.length();
        for(j=f-d,k=0;j<f;j++,k++)
        {
            if(a[j]==b[k])
            {
                c++;
            }
            //abcde
            //abc
        }
        if(c==d)
        {
            cout<<"encaixa"<<endl;
        }
        else
        {
            cout<<"nao encaixa"<<endl;
        }
        c=0;
    }
    return 0;
}
