#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

char mat[300][300];
bool visit[300][300];
int pX[6]={-1,-1,0,1,1,0};
int pY[6]={0,-1,-1,0,1,1};
int cont;

bool flag = false;
int a,b;

/*
 * 00	01	02	03
 * 10	11	12	13
 * 20	21	22	23
 * 30	31	32	33
 * 40	41	42	43
 * 
 * 
 * */
void ff(int x, int y){
	
	visit[x][y]=true;
	for (int i = 0; i < 6; i++)
	{
		if(x+pX[i] < a  && x+pX[i] >= 0 && y+pY[i] < a && y+pY[i] >=0){
			mat[x][y]=cont+'0';
			if((mat[x+pX[i]][y+pY[i]]=='b') && visit[x+pX[i]][y+pY[i]]==false){
				ff(x+pX[i],y+pY[i]);
			}
		}
	}
	
	
}

int main(){
	
	
	cont=0;
	while(scanf("%d", &a), a != 0)
	{
		flag = false;
		memset(visit,false,sizeof visit);
		for (int j = 0; j < a; j++)
		{
			for (int x = 0; x < a; x++)
			{
				
				cin>>mat[j][x];
			}
		}
		for (int j = 0; j < a; j++)
		{
			if(mat[0][j]=='b' && visit[0][j]==false){
				ff(0,j);
			}	
		}
		
		for (int j = 0; j < a; j++)
		{
			if(visit[a-1][j]) flag=true;
			
		}
			
		if(flag)
			cout<<++cont<<" B"<<endl;
		else
			cout<<++cont<<" W"<<endl;

	}
	
}



