#include<bits/stdc++.h>
using namespace std;
#define MAXN 1100

char MA[MAXN][MAXN];
int A[]={-1,0,0,1};
int B[]={0,1,-1,0};
int b,c;
void FF(int x,int y)
{
	if(x<0 || y<0 || x>=b || y>=c || MA[x][y]!='A')
	{
		return;
	}
	MA[x][y]='T';
	for (int i = 0; i < 4; i++)
	{
		FF(x+A[i],y+B[i]);
	}
}
int main()
{	
	
	while(cin>>b>>c, b!=0 && c!=0)
	{
		for (int i = 0; i < b; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cin>>MA[i][j];
			}
		}
		for (int i = 0; i < b; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if(MA[i][j]=='T')
				{
					MA[i][j]='A';
					FF(i,j);
				}
			}
			
		}
		for (int i = 0; i < b; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cout<<MA[i][j];
			}
			cout<<endl;
		}
		
		cout<<endl;
	}
	
}
