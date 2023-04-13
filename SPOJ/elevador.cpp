#include<iostream>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;

int main(){

    int top, inicio, meta, cima, baixo;
    queue<int> elevador;
    
    scanf("%d %d %d %d %d", &top, &inicio, &meta, &cima, &baixo);
    int vet[top+1];
    memset(vet, 0, sizeof(vet));
    int cont = 0;
    elevador.push(inicio);
    while(!elevador.empty() && cont <= top && vet[elevador.front()]!=1){
        if(elevador.front() == meta){
            elevador.pop();
            break;
        }else{
            if(elevador.front() < meta){
                if(cima + elevador.front() <= meta && vet[elevador.front()+cima]==0){
                    cont++;
                    vet[elevador.front()]=1;
                    elevador.push(cima+elevador.front());
                    elevador.pop();
                }else{
                    if(elevador.front()+cima <= top && vet[elevador.front()+cima]==0){
                        cont++;
                        elevador.push(cima+elevador.front());
                        elevador.pop();
                    }else{
                        if(vet[elevador.front()-baixo]==0)
                        {
                            cont++;
                            elevador.push(elevador.front()-baixo);
                            elevador.pop();
                        }else{
                            vet[elevador.front()]=1;
                        }
                    }
                }
            }else{
                if(elevador.front()-baixo >= meta && vet[elevador.front()-baixo]==0){
                    cont++;
                    elevador.push(elevador.front()-baixo);
                    elevador.pop();
                }else{
                    if(elevador.front()-baixo >= 1 && vet[elevador.front()-baixo]==0){
                        cont++;
                        elevador.push(elevador.front()-baixo);
                        elevador.pop();
                    }else{
                        if(vet[elevador.front()+cima]==0)
                        {
                            cont++;
                            elevador.push(elevador.front()+cima);
                            elevador.pop();
                        }
                        else{
                            vet[elevador.front()]=1;
                        }
                    }
                }
            }
            
        }
    }
    if(elevador.size()>=1){
        printf("use the stairs\n");
    }else{
        printf("%d\n", cont);
    }
    
}