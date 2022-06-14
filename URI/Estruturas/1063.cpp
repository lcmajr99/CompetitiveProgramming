#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,x;
	char a;
	while(scanf("%d",&n),n)
	{
		stack<int>aux;
		stack<int>pilha1;
		stack<int>pilha2;
		
		for (int i = 0; i < n; i++)
		{
			cin>>a;
			aux.push(a);
		}
		for (int i = 0; i < n; i++)
		{
			pilha1.push(aux.top());
			aux.pop();
		}
		for (int i = 0; i < n; i++)
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
				cout<<"I";
				cout<<"R";
			}
				else
				{
					if(aux.empty())
					{
						cout<<"I";
						aux.push(pilha1.top());
						pilha1.pop();
					}
					else
					{
						if(aux.top()==pilha2.top())
						{
							aux.pop();
							pilha2.pop();
							cout<<"R";
						}
						else
						{
							aux.push(pilha1.top());
							pilha1.pop();
							cout<<"I";
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
						cout<<"R";
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
			
			if(!pilha2.empty())
			{
				cout<<" Impossible";
			}
			cout<<endl;
		}
			
		
}

