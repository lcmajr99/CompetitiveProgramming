#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b, i, soma=0;
	cin>>a>>b;
	
	
	if(a<b)
	{
		for(i=a;i<=b;i++)
		{
			
			if(i%13!=0)
			{
				
				soma=soma+i;
				
			}
			
		}
		cout<<soma<<endl;
	}
	if(a>b)
	{
		for(i=b;i<=a;i++)
		{
			
			if(i%13!=0)
			{
				
				soma=soma+i;
				
			}
			
		}
		cout<<soma<<endl;
	}
}
