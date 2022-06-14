#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int k,n,cont=0;
	string a;
	cin>>n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		stack<char>pilha;
		stack<char>aux;
		cin>>a;
		cin.ignore();
		cont=0;
		k=a.length();
		for (int j = 0; j < k; j++)
		{	
			pilha.push(a[j]);
		}
		for (int x = 0;!pilha.empty(); x++)
		{
			char teste;
			teste=pilha.top();
			pilha.pop();
			if(teste=='<' || teste=='>')
			{
				aux.push(teste);
			}
		}
		for (int j = 0;!aux.empty() ; j++)
		{
			char tt;
			if(aux.top()=='<')
			{
				tt=aux.top();
				aux.pop();
				pilha.push(tt);
			}
			else
			{
				if(!pilha.empty())
				{
					pilha.pop();
					aux.pop();
					cont++;
					if(aux.empty())
					{
						break;
					}
				}
				else
				{	
					aux.pop();
				}
			}
		}
		
		cout<<cont<<endl;
	}
	
	
	
}
