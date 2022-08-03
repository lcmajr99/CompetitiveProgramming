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


    int a,b,d1,d2,d3;
    while(cin>>a>>b, a != 0 or b != 0)
    { 
        v1 = vector<vector<int>> (a);
        visit = vector<bool> (a);


        for (int i = 0; i < b; i++)
        {
            cin>>d1>>d2>>d3;
            if(d3 == 2){
                v1[d1-1].push_back(d2-1);
                v1[d2-1].push_back(d1-1);
            }else{
                v1[d1-1].push_back(d2-1);
            }

        }
        
        int cont = 0;
        for (int i = 0; i < a; i++)
        { 
        
            dfs(i); 
            bool flag = true;
            for(int j  = 0; j < visit.size(); j++){
            if(!visit[j]) flag = false;
            }
            
        
            if(flag == true)cont++;

            visit.assign(a, false);
        }
        if(cont ==  a) cout<<1<<endl;
        else cout<<0<<endl;
    }   
    
    
    

}