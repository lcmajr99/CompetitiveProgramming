#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int aux2,aux,n,m;
	while(cin>>n>>m, n!=0 || m!=0)
	{
		bool flag=false;
		int cont=0,carry=0;
		
		if(n>=m)
		{	
			cont=0;
			while(n>0)
			{
				aux=n%10;
				aux2=m%10;
				n=n/10;
				m=m/10;
				
				if((aux+aux2+carry)>9)
				{
					cont++;
					carry=1;
				}
				else
					carry=0;
				if(m==0)
					flag=true;
				if(flag) aux2=0;
			}
		}
		else
		{	
			cont=0;
			while(m>0)
			{
				aux=n%10;
				aux2=m%10;
				n/=10;
				m/=10;
				if((aux+aux2+carry)>9) 
				{
					cont++;
					carry=1;
				}
				else
					carry=0;
				if(n==0)
					flag=true;
				if(flag) aux=0;
			}
		}
		if(cont==0)
		{
			puts("No carry operation.");
		}
		else
			if(cont==1)
				puts("1 carry operation.");
			else
				printf("%d carry operations.\n",cont);
	}
}
