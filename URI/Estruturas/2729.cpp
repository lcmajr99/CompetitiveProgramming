#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int cont;
    cin>>cont;
    getchar();
    while(cont--)
    {
        //puts("entrei");
        map <string,int>nomes;
        getline(cin,a);
        string b={};
        for (int i = 0; i < a.length(); i++)
        {
            if(a[i]!=' ')
            {
                b+=a[i];
            }
            else
            {
                if(nomes.find(a)==nomes.end())
                    nomes.insert(pair<string,int>(b,1));
                b={};
            }

        }
        if(nomes.find(a)==nomes.end())
            nomes.insert(pair<string,int>(b,1));

        map<string,int>::iterator it;
        it=nomes.begin();
        while(it!=nomes.end())
        {
            if(it==nomes.begin())
               cout<<it->first;
            else
                cout<<" "<<it->first;
            it++;
            if(it==nomes.end())
                break;
        }
        //cout<<endl;
        puts("");
    }
}
