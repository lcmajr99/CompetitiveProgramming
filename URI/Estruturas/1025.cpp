#include<bits/stdc++.h>
using namespace std;


int bb(int valor,int *vaux, int tam)
{
	int li=0;
	int ls=tam-1;
	int meio;
	while(li<=ls)
	{
		meio=(ls+li)/2;
		if(valor == vaux[meio])
			return meio;
		if(valor>vaux[meio])
			li=meio+1;
		else
			ls=meio-1;
			
	}
	return -1;
}
int main()
{
	int a,b,cont=1;
	while(scanf("%d%d", &a,&b), a!=0 || b !=0)
	{
		int aux=0,x;
		int vet[a],vetb[b];
		for (int i = 0; i < a; i++)
		{
			scanf("%d", &aux);
			vet[i]=aux;
			
		}
		sort(vet, vet+a);
		for (int i = 0; i < b; i++)
		{
			scanf("%d", &aux);
			vetb[i]=aux;
		}
		printf("CASE# %d:\n",cont);
		for (int i = 0; i < b; i++)
		{
			x=bb(vetb[i],&vet[0],a);
			while(x>0&&vet[x-1]==vet[x])
			{
				x--;
			}
			if(x==-1)
				printf("%d not found\n", vetb[i]);
			else
				printf("%d found at %d\n", vetb[i], x+1);
		}
		
		cont++;
	}
}
