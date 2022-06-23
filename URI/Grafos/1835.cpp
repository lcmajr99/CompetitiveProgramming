#include <bits/stdc++.h>

using namespace std;

vector<vector<int>>v1;
vector<bool> visit;

void dfs(int vertice){
    visit[vertice]= true;

    for(auto a : v1[vertice]){
        if(!visit[a])
            dfs(a);
    }

}


int main(){

    int n;
    cin>>n;
    int epoch = 1;
    while (n--)
    {
        int a,b,d1,d2;
        cin>>a>>b;
        
		v1 = vector<vector<int>> (100100);
		visit = vector<bool> (100100);
        for (int i = 0; i < b; i++)
        {
            cin>>d1>>d2;
            v1[d1].push_back(d2);
            v1[d2].push_back(d1);

        }
        int cont = 0;
        for(int i = 1; i <= a; i++){
            if(!visit[i]){
                dfs(i);
                cont++;
            }
        }

        if(cont == 1 )
              printf("Caso #%d: a promessa foi cumprida\n", epoch);
        else  printf("Caso #%d: ainda falta(m) %d estrada(s)\n", epoch, cont-1);

        epoch++;

       
       
    }
    
    

}