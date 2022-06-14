#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int m;
		float total=0,cont=0,media=0,valor;
		cin>>m;
		int vet[m];
		for (int i = 0; i < m; i++)
		{
			cin>>vet[i];
			total+=vet[i];
		}
		
		media=total/m;
		for (int i = 0; i < m; i++)
		{
			if(vet[i]>media)
			{
				cont++;
			}
		}
		valor=((cont/m)*100);
		printf("%.3f%\n",valor);
		
		
		
		
	}
}
