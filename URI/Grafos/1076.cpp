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
	
	visit[vertice] = true;
	for (auto a : vvec[vertice])
	{
		if(!visit[a]){
            
	        dTapa++;
			 dfs(a);
		 }
			
	}
	
}

int main(){
	
	
	int n,p0,a,v,d1,d2;
	cin>>n;
	
	for (int i = 0; i < n; i++)
	{
		cin>>p0;
		cin>>v>>a;
		vvec = vector<vector<int>> (100);
		visit = vector<bool> (100);
		for (int j = 0; j < a; j++)
		{
			cin>>d1>>d2;
			vvec[d1].push_back(d2);
            vvec[d2].push_back(d1);
			
		}
        dTapa=0;
        dfs(p0);
		
		cout<<dTapa*2<<endl;
		
		
		
	}
}



