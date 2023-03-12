#include<iostream>
using namespace std;

int main(){

    int casos,a,b;
    cin>>casos;
    while(casos--){
        cin>>a>>b;
        if(a%b>0){
            cout<<(a/b) + 1<<endl;
        }else{
            cout<<(a/b)<<endl;
        }
    }
}