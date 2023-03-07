#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int a,b,cont=0,contE=0;
    cin>>a;
    while(a--){
        cin>>b;
        contE=0;
        while(b){
            cont=1;
            cout<<(int)sqrt(b)<<endl;
            for(int i = (int) sqrt(b); i >= 1; i--){
                if(b%i==0)
                    cont+=2;
            }
            cout<<"cont->"<<cont<<endl;
            if(cont%2==0)
                contE++;    
            b--;
        }
        cout<<contE<<endl;
    }
}