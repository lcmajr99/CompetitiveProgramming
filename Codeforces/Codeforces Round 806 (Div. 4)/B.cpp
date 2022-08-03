#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        string palavra;
        int qtd;
        cin>>qtd;
        cin>>palavra;
        set <char> count;
        for(int i = 0; i < palavra.length() ; i++){
            count.insert(palavra[i]);
        }
        cout<<count.size()+palavra.length()<<endl;
    }
}