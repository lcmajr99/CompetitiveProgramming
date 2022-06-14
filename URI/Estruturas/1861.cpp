#include <iostream>
#include <bits/stdc++.h>
using namespace std;
map <string,int>nomes;
string mortos [1000000];

int main()
{
    //freopen("in","r",stdin);
    string a,b;
    int i=0;
    while(cin>>a>>b)
    {
       mortos[i]=b;
       if(nomes.find(a) == nomes.end())
       {
           nomes.insert(pair<string,int>(a,1));
       }
       else
          nomes[a]++;
       i++;
    }
    puts("HALL OF MURDERERS");
    while(i>=0)
    {
        if(nomes.find(mortos[i])!=nomes.end())
        {
            nomes[mortos[i]]=0;
        }
        i--;
    }
    map<string,int>::iterator it;
    it=nomes.begin();
    while(it!=nomes.end())
    {
        if(it->second!=0)
        {
            cout<<it->first;
            printf(" %d\n", it->second);
        }
        it++;
        if(it==nomes.end())
			break;
    }
    return 0;
}
