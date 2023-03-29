#include<stdio.h>
#include<queue>
#include<vector>

using namespace std;

const int inf = 1e9;
const int tam = 9;

vector<int> dist;
vector<int> ma[tam];
/*

	Basicamente o algoritmo consiste em ler o grafo de linha por linha, ao invés de ir descendo até acabar (dfs).
	Para a implementação é utilizado uma fila. Toda vez pegamos o primeiro elemento da fila e colocamos seus filhos nessa lista, e seguimos nesse sentido até ler todo o grafo.
	
	Aplicação: distancia;
	

*/

void bfs(int a){
    queue<int> fila;
    fila.push(a);
    dist.assign(tam,inf);
    dist[a] = 0;
    while(!fila.empty()){
        printf("%d ", dist[a]);
        fila.pop();
        for(auto filho : ma[a]){
            fila.push(filho);
            dist[filho]=dist[a]+1;
        }
        a = fila.front();
    }
}


int main(){
    
    ma[0].push_back(1);
    ma[0].push_back(2);
    ma[1].push_back(3);
    ma[3].push_back(4);
    ma[3].push_back(6);
    ma[2].push_back(5);
    ma[5].push_back(7);
    bfs(0);


}
