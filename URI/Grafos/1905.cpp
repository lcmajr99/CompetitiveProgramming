#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

char mat[100][100];
int z[4]={-1,0,0,1};
int c[4]={0,-1,1,0};
char wall = 'X';
int a,b;
void ff(int x,int y){    
	if(x<0 || x >= 5 || y <0 || y >= 5 || mat[x][y]!='0')
	    return;
	    
	mat[x][y]='P';
	for (int i = 0; i < 4; i++)
	{	
		if(mat[x+z[i]][y+c[i]] == '0' && x+z[i] >= 0 && x+z[i] < 5 
			&& y+c[i] >=0 && y+c[i] < 5)
		ff(x+z[i],y+c[i]);
		
	}
}
int main(){
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int z = 0; z < 5; z++)
			{
				cin>>mat[j][z];
			}	
		}	
		ff(0,0);
		
		if(mat[4][4]=='P') cout<<"COPS"<<endl;
		else cout<<"ROBBERS"<<endl;
		
		
	}
	
}
