#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	int cont;
	while(cin>>a)
	{
		cont=0;
		stack<char>pilha;
		stack<char>aux;
		int k;
		k=a.length();
		for (int i = 0; i < k; i++)
		{
			pilha.push(a[i]);
		}
		while(!pilha.empty())
		{
			if(aux.empty())
			{
				aux.push(pilha.top());
				pilha.pop();
			}
			else
			{
				if((pilha.top()=='C' && aux.top()=='F')||(pilha.top()=='F' && aux.top()=='C')||(pilha.top()=='S' && aux.top()=='B')||(pilha.top()=='B' && aux.top()=='S'))
				{
					pilha.pop();
					aux.pop();
					cont++;
				}
				else
				{
					aux.push(pilha.top());
					pilha.pop();
				}
			}
		}
		cout<<cont<<endl;
		
		
			
	}
	
}

