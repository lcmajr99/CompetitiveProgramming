#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n,i,a,b,j,x,k;
    queue<int>fila;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        for(j=1;j<=a;j++)
        {
            fila.push(j);
        }
        for(j=1;j<=a;j++)
        {
            for(x=1;x<b;x++)
            {
                k=fila.front();
                fila.push(k);
                fila.pop();
            }
            if(fila.size()>1)
            {
                fila.pop();
            }
            else
            {
                cout<<"Case "<<i+1<<": ";
                cout<<fila.front()<<endl;
            }
        }

        fila.pop();
    }
    return 0;
}
