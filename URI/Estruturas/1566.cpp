#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("in.txt","r",stdin);
	int n ,b;
	int vet[4000000];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&b);
		for (int i = 0; i < b; i++)
		{
			scanf("%d",&vet[i]);
		}
		sort(vet, vet+b);
		printf("%d",vet[0]); 
		for (int i = 1; i < b; i++)
		{
			printf(" %d",vet[i]);
		}
		puts("");	
	}
}
