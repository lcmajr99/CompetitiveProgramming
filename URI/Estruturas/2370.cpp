#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<int, string> >vet;
	int a,b,d;
	string c;
	cin>>a>>b;
	for (int i = 0; i < a; i++)
	{
		cin>>c>>d;
		vet.push_back(make_pair(d,c));//insere no vector o pair
	}
	int tam=vet.size(),aux,t=0,R;//variavel para pegar o tamanho do vector
	sort(vet.begin(),vet.end());//ordena o vector
	reverse(vet.begin(),vet.end());//reverte a ordenacao do vector
	if(a%b==0)
	{
		R=0;
		aux=a/b;
	}
	else
	{
		aux=((a/b)+1);
		R=a%b;
	}
	string lista[b][aux];//matriz para organizar time e seus jogadores
	for (int i = 0; i < aux; i++)
		for (int j = 0; j < b; j++)
			if(t<tam)//verifica se t e menor q o tamanho do vector
				lista[j][i]=vet[t++].second;
	string ord[a+b];//declaracao do vetor time para ordernar um a um
	int X=0;//rest= a quantidade de a/b, R= a quantidade de jogadores q vao sobrar  e X para saber se aquele time vai ter um jogador a mais ou nao
	for (int j = 0; j < b; j++)
	{
		if(R>0)// verifica caso o ainda tem jogadores a ser distribuido
		{
			R--;//diminui um jogador caso exista
			X=0;//o time vai ter 1 jogador a mais
		}
		else
		{
			if(a%b==0)
				X=0;
				else
					X=1;//o time nao vai ter um jogador a mais
		}
		for (int i = 0; i < aux-X; i++)
				ord[i]=lista[j][i];//passa os jogadores para o time 
		sort(ord,ord+aux-X);//ordena o time
		cout<<"Time "<<j+1<<endl;
		for (int i = 0; i < aux-X; i++)
				cout<<ord[i]<<endl;//imprime o time
		puts("");
	}
}
