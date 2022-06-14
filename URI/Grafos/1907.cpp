#include<bits/stdc++.h>
using namespace std;
#define MAXN 1100

char MA[MAXN][MAXN];
int A[]={-1,0,0,1};
int B[]={0,1,-1,0};
int b,c;
void FF(int x,int y)
{
	if(x<0 || y<0 || x>=b || y>=c || MA[x][y]!='.')
	{
		return;
	}
	MA[x][y]='o';
	for (int i = 0; i < 4; i++)
	{
		FF(x+A[i],y+B[i]);
	}
}
int main()
{
	int cont=0;
	cin>>b>>c;
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
			if(MA[i][j]=='.')
			{
				cont++;
				FF(i,j);
			}
		}
		
	}
	cout<<cont<<endl;
	
	
	
	
}
