#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,x,a;
	while(scanf("%d",&n),n)
	{
		while (scanf("%d",&x),x) 
		{	
			stack<int>aux;
			stack<int>pilha1;
			stack<int>pilha2;
			a=x;
			aux.push(a);
			for (int i = n; i >= 1; i--)
			{
				pilha1.push(i);
			}
			for (int i = 0; i < n-1; i++)
			{
				cin>>a;
				aux.push(a);
			}
			for (int i = 0; i < n; i++)
			{
				pilha2.push(aux.top());
				aux.pop();
			}
			
			while(!pilha1.empty())
			{
				if(pilha1.top()==pilha2.top())
				{
					pilha1.pop();
					pilha2.pop();
				}
				else
				{
					if(aux.empty())
					{
						aux.push(pilha1.top());
						pilha1.pop();
					}
					else
					{
						if(aux.top()==pilha2.top())
						{
							aux.pop();
							pilha2.pop();
						}
						else
						{
							aux.push(pilha1.top());
							pilha1.pop();
						}
					}
				}	
			}
			int t=1;
			while(t)
			{
				if(!aux.empty() && !pilha2.empty())
				{
					if(aux.top()==pilha2.top())
					{
						aux.pop();
						pilha2.pop();
					}
					else
					{
						t=0;
					}
				}
				else
				{
					t=0;
				}
			}
			if(pilha2.empty())
			{
				cout<<"Yes"<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}
		}
			cout<<endl;
		}
}
