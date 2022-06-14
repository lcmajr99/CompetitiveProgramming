#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int maior,menor,S,U,V;
	
		vector< pair<int,int> > vet;
		cin>>S;
		for (int i = 0; i < S; i++)
		{
			cin>>U>>V;
			vet.push_back(make_pair(V,U));	
		}
		sort(vet.begin(),vet.end());
		maior=vet[0].first;	
		menor=vet[0].second;
		if(S==1)
		{
			cout<<"1\n";
		}
		else
		{
			int cont=1;
			for (int i = 1; i < S; i++)
			{
				if(vet[i].second>=maior || vet[i].first<=menor)
				{
					cont++;	
					menor=vet[i].second;
					maior=vet[i].first;
				}
			}
			cout<<cont<<endl;
		}
	
}
