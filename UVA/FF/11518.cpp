#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

vector<vector<int> > vvec;
vector<bool> visit;

int dTapa;

/*
 * 00	01	02	03
 * 10	11	12	13
 * 20	21	22	23
 * 30	31	32	33
 * 40	41	42	43
 * 
 * 
 * */
void dfs(int vertice){
	
	dTapa++;
	visit[vertice] = true;
	for (auto a : vvec[vertice])
	{
		if(!visit[a]){
			 dfs(a);
		 }
			
	}
	
}

int main(){
	
	
	int n,a,b,c,d1,d2,tapa;
	cin>>n;
	
	for (int i = 0; i < n; i++)
	{
		dTapa=0;
		cin>>a>>b>>c;
		vvec = vector<vector<int>> (100560);
		visit = vector<bool> (100560);
		for (int j = 0; j < b; j++)
		{
			cin>>d1>>d2;
			vvec[d1].push_back(d2);
			
		}
		for (int z = 0; z < c; z++)
		{
			cin>>tapa;
			if(!visit[tapa])
				dfs(tapa);
		}
		cout<<dTapa<<endl;
		
		
		
	}
}



