#include<bits/stdc++.h>
using namespace std;

int main()
{

	int a;
	cin>>a;
	while(a--)
	{
		
		int b,cont=0;
		bool flag;
		cin>>b;
		int c[b];
		for(int i=0;i<b;i++)
		{
			cin>>c[i];
		}
		for(int i=0;i<b-1;i++)
		{
			
			if(c[i]>c[i+1])
			{
				swap(c[i],c[i+1]);
				cont++;
				flag =true;
			}
			if(i+1==b-1 && flag==true)
			{
				i=-1;
				flag=false;
			}
		}
		cout<<"Optimal train swapping takes "<<cont<<" swaps.\n";
		
	}
	
}
