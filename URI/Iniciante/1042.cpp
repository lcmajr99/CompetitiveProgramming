#include <iostream>

using namespace std;
int main()
{

	int i,j,b[3],a[3],aux;
	for(i=0;i<3;i++)
	{
	
		cin>>a[i];
		b[i]=a[i];
	}
	for(i=0;i<2;i++)
	{
		for(j=i+1;j<3;j++)
		{
			
			if(a[i]>a[j])
			{
			
				aux=a[j];
				a[j]=a[i];
				a[i]=aux;
			
			}
		
		}
	}
	for(i=0;i<3;i++)
	{
	
		cout<<a[i]<<endl;
	
	}
	cout<<endl;
	for(i=0;i<3;i++)
	{
	
		cout<<b[i]<<endl;
	
	}
}