#include<iostream>
#include<string>
using namespace std;
int main()
{
	string palavra;
	int n,cont=0;
	
	while(cin>>n, n != 0){
		cin>>palavra;
		cont = 0;
		for (int i = 0; i < palavra.length(); i++)
		{
			if(palavra[i]=='D') cont++;
			else
				cont--;
			
		}
		
		cont = cont % 4 <= 0 ? cont%4 + 4 : cont%4;

		if(cont == 4)
			cout<<'N'<<endl;
		else
			if(cont == 1)
				cout<<'L'<<endl;
			else
				if(cont == 2)
					cout<<'S'<<endl;
				else
					cout<<'O'<<endl;
	}
	
}