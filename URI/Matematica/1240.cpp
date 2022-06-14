#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	string a,b;
	cin>>x;
	while(x)
	{
		int cont=0,j;
		cin>>a>>b;
		if(b.length()>a.length())
		{
			cout<<"nao encaixa"<<endl;
		}
		else
		{
			j=a.length()-b.length();
				
			for (int i = 0; i < b.length(); i++)
			{
				if(a[j]==b[i])
				{
					cont++;
					j++;
				}
				else
				{
					break;
				}
				
			}
			if(cont==b.length())
			{
				cout<<"encaixa"<<endl;
			}
			else
			{
				cout<<"nao encaixa\n";
			}
		}
		x--;
	}
}
