#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{
    int n,z,i,j;
    string p,aux;
    float s,rest,m,l,a;
    queue <string> produto;
    queue <float> preco;
    queue <string> q;
    queue <int> w;
    cin>>n;
    for(i=0;i<n;i++)
    {
        rest=0;
        cin>>a;
        for(j=0;j<a;j++)
        {
            cin>>p>>s;
            produto.push(p);
            preco.push(s);
        }
        cin>>z;
        for(j=0;j<z;j++)
        {
            cin>>p>>s;
            q.push(p);
            w.push(s);
        }
        while(!q.empty())
        {
            p=produto.front();
            aux=q.front();
            if(p == aux)
            {
                m=preco.front();
                l=w.front();
                rest=rest+(m*l);
                preco.pop();
                produto.pop();
                w.pop();
                q.pop();
            }
            else
            {
                p=produto.front();
                produto.pop();
                produto.push(p);
                s=preco.front();
                preco.pop();
                preco.push(s);
            }
        }
        while(!produto.empty())
        {
            produto.pop();
            preco.pop();
        }
        printf("R$ %.2lf\n",rest);
    }
    return 0;
}
