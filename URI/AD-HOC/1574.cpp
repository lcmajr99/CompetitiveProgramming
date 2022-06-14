#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		string andar;
		int robo=0,mover[n];
		cin>>m;
		cin.ignore();
		for (int j = 0; j < m; j++)
		{
			string aux;
			getline(cin,andar);
			if(andar=="LEFT")
			{
				mover[j]=-1;
			}
			else
			{
				if(andar=="RIGHT")
				{
					mover[j]=1;
				}
				else
				{
					int cont=0,teste=0,soma=0;
					for (int x = 8; andar[x]!='\0' ; x++)
					{
						aux+=andar[x];
						cont++;
					}
					for (int x = cont-1; x >=0 ; x--)
					{
						
						soma=soma+((aux[x]-48) * pow(10,teste));
						teste++;
					}
					mover[j]=mover[soma-1];
				}
			}

		}
		for (int j = 0; j < m; j++)
		{
			robo+=mover[j];
		}
		cout<<robo<<endl;
		
		
	}
	

}
