#include <iostream>
#include <string.h>
using namespace std;

int main()
{	
	int z,n,c=0,aux;
	cin>>z;

	for (int x = 0; x < z; x++)
	{	
	
		cin>>n;
		int b[n], a[n];
		for (int i = 0; i < n; i++)
		{
				cin>>a[i];
				b[i]=a[i];
		}
		
		for (int i = 0; i < n-1; i++)
		{
			for (int j = i+1; j < n; j++)
			{
				if(a[i]<a[j])
				{
						
						aux=a[j];
						a[j]=a[i];
						a[i]=aux;
						
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i]==b[i])
			{
				c++;
			}
		}
		cout<<c<<endl;
		c=0;
	}	
}	
