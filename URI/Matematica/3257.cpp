#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int> arvores;
    int a,i=0,valor,maiorD=-1;
    cin>>a;
    while(a--){
        cin>>valor;
        arvores.push(valor);
        i++;
    }
    i=1;
    while(!arvores.empty()){
        if(arvores.top()+i+1 > maiorD){
            maiorD=arvores.top()+1+i;
        }
        arvores.pop();
        i++;
    }
    cout<<maiorD<<endl;

}