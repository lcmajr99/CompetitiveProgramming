#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

char mat[405][405];
bool visit[405][405];
int pX[4]={-1,0,1,0};
int pY[4]={0,1,0,-1};
int cont, maior;
int a,b;

void ff(int x, int y){
	
	cont++;
	visit[x][y]=true;
	mat[x][y]=cont+'0';
	for (int i = 0; i < 4; i++)
	{
		if(x+pX[i] < a  && x+pX[i] >= 0 && y+pY[i] < b && y+pY[i] >=0){
			
			if((mat[x+pX[i]][y+pY[i]]=='C') && visit[x+pX[i]][y+pY[i]]==false){
				ff(x+pX[i],y+pY[i]);
			}
		}
	}
	
	
}

int main(){
	cin>>a>>b;
	for (int j = 0; j < a; j++)
	{
		for (int x = 0; x < b; x++)
		{
			cin>>mat[j][x];
		}
	}
	for (int j = 0; j < a; j++)
	{
		for(int x = 0; x < b; x++){
			if(mat[j][x]=='C' && visit[j][x]==false){
				cont = 0;
				ff(j,x);			
			}	 		
			if(cont > maior) maior = cont;
		}
	}
	
	cout<<maior<<endl;
}



