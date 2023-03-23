#include<stdio.h>
using namespace std;

int main(){
    int plays, id, idp, jogo, cont =0;;

    while(scanf("%d %d", &plays, &id) != EOF)
    {
        while(plays--){
            scanf("%d %d", &idp, &jogo);
            if(idp == id && jogo == 0)
                cont++;
        }
        printf("%d\n", cont);
        cont=0;
    }
}