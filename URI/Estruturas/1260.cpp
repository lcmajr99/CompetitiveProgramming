#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,cont;
    cin>>k;
    string a;
    getchar();
    getline(cin,a);
    while(k!=0)
    {
        map <string,int> mapa;
        cont=0;
        while(getline(cin,a), !a.empty())
        {
            if(mapa.find(a)==mapa.end())
                mapa.insert(pair<string,int>(a,1));
            else
                mapa[a]++;
            cont++;
        }
        if(mapa.empty())continue;
        map <string,int>::iterator it;
        double num;
        string nome;
        it=mapa.begin();
        while(it!=mapa.end())
        {
            num=(it->second/double(cont))*100;
            cout<<it->first<<" ";
            printf("%.4f\n", num);
            it++;
            if(it==mapa.end())
                break;
        }
        if(k>1)cout<<endl;
        k--;
        
    }
}
