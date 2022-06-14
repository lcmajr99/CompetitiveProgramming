#include <bits/stdc++.h>

using namespace std;

int main()
{
	string c;
	char a;
	int cont=0,n;
	cin>>n;
	
	stack<char>pilha1;
	for (int i = 0; i < n; i++)
	{
		
			stack<char>pilha2;
			stack<char>aux1;
			stack<char>aux2;
			
			for (int j = 0;j < 4; j++)
			{
				cin>>a;
				aux2.push(a);
				
			}
			if(pilha1.empty())
			{
				pilha1.push('F');
				pilha1.push('A');
				pilha1.push('C');
				pilha1.push('E');
			}
			for (int j = 0;!aux2.empty(); j++)
			{
				pilha2.push(aux2.top());
				aux2.pop();
				
			}
			while(pilha1.top()==pilha2.top())
			{
				if(!pilha1.empty() && !pilha2.empty())
				{
					aux1.push(pilha1.top());
					aux2.push(pilha2.top());
					pilha1.pop();
					pilha2.pop();
				}
				if(pilha1.empty() || pilha2.empty())
				{
					break;
				}
				
					
			}
			if(pilha2.empty())
			{
				cont++;
			}
			else
			{
				while(!aux1.empty())
				{
						pilha1.push(aux1.top());
						pilha2.push(aux2.top());
						aux1.pop();
						aux2.pop();
				}
				while(!pilha2.empty())
				{
					pilha1.push(pilha2.top());
					pilha2.pop();
				}
				
			}	
	}
	cout<<cont<<endl;
	
}

