#include<iostream>

using namespace std;

int main(){
    int a, maior =-1;
    while(cin>>a, a!=0){
        if(a>maior)
            maior = a;
    }
    cout<<maior<<endl;
}