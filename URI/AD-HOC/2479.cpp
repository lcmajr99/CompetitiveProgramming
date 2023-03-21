#include<iostream>
#include<set>
#include<stdio.h>
using namespace std;

int main(){

    int n,comp=0,ncomp=0;
    string sinal;
    string palavra;
    set<string> criancas;
    scanf("%d", &n);
    while(n--){
        cin>>sinal;
        cin>>palavra;    
        criancas.insert(palavra);

        if(sinal[0] == '+') comp++;
        else ncomp++;
    }
    for (auto& str : criancas) {
        std::cout << str << endl;
    }
    printf("Se comportaram: %d | Nao se comportaram: %d\n", comp, ncomp);
}