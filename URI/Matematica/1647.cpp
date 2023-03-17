#include<iostream>

using namespace std;

int main(){
    int a;
    while(cin>>a, a!=0){
        long long unsigned aux[a], cont,somador=0;
        for(int i =0; i<a; i++){
            cin>>aux[i];
        }
        cont=0;
        for(int i = a-1; i>=0;i--){
            cont = aux[i];
            somador += cont;
            aux[i]=0;
            for(int j = i-1; j>=0; j--){
                aux[j]+=cont;
            }
        }
        cout<<somador<<endl;
    }
}