#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(cin>>n,n!=0)
	{
		int vet[n];
		int j=0;
		int k=1;
		while(pow(k,2)<=n)
		{
			vet[j]=k*k;
			j++;
			k++;
		}
		for (int i = 0; i < j; i++)
		{
			if(i==j-1) cout<<vet[i]<<endl;
			else cout<<vet[i]<<" ";
		}
		
		
	}
	
}
