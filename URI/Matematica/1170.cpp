#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	long long int unsigned total,dobro;
	cin>>n;
	while (n--)
	{
		cin>>m;
		dobro=1,total=1;
		for (int i = 1; i < m; i++)
		{
			dobro=2*dobro;
			total+=dobro;
		}
		cout<<total/(1000*12)<<" kg"<<endl;
		
	}
}
