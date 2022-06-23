
#include<iostream>
#include<vector>
#include<set>

using namespace std;

vector<int> adj[1000];
vector<bool> visited;
set<char> order;
int casos = 1;
void dfs(int x){
	char c1 = x+'a';
	if(!visited[x])
		order.insert(c1);	
	visited[x] = true;
	for(auto v: adj[x]){
		if(visited[v] != true){
			 dfs(v);
		 }
	}
}

int main(){
	int x,n1,n2,a,b;
	cin>>x;
	char l1,l2;

    
    set<char>::iterator itr;

	for (int i = 0; i < x; i++)
	{
		int cont = 0;
		cin>>a>>b;
		visited.assign(a, false);
		for (int j = 0; j < b; j++)
		{
			cin>>l1>>l2;
			n1= l1-97;
			n2= l2-97;
			adj[n1].push_back(n2);
			adj[n2].push_back(n1);
		}
		cout<<"Case #"<<casos<<":";
		for(int j = 0; j < a; j++){
			if(visited[j]==false){
				cont++;	
				cout<<endl;
			}
			dfs(j);
			adj[j].clear();
            for (itr = order.begin(); itr != order.end(); itr++) {
                cout << *itr << ",";
            }
            order.clear();
            	
		}
		cout<<endl;
		cout<<cont<<" connected components"<<endl;
		casos++;
		cout<<endl;
	}
	
	
	
}
