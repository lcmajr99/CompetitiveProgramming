#include<iostream>

using namespace std;
int main()
{
	
	int n,seg=0;
	cin>>n;
	int a[101][101];
	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < n+1; j++)
		{	
			cin>>a[i][j];
		}
		
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(a[i][j]==1)
			{
				
					seg++;
					
			}
			if(a[i][j+1]==1)
			{
					seg++;
			}
			if(a[i+1][j]==1)
			{
					seg++;
			}
			if(a[i+1][j+1]==1)
			{
					seg++;
					
			}
			if(seg>1)
			{
				cout<<"S";
			}
			else
			{
				cout<<"U";
			}
			seg=0;
			//00 01 02 03
			//10 11 12 13
			//20 21 22 23
		}
		cout<<endl;
		
	}

}
