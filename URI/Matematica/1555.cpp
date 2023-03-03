#include<iostream>
#include<math.h>

using namespace std;

int rafaelF(int x, int y){
    return pow(3*x, 2) + pow(y,2);
}
int betoF(int x, int y){
    return 2*pow(x,2) + pow(5*y, 2);
}

int carlosF(int x, int y){
    return -100*x + pow(y, 3);
}

int main(){

    int n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        int rafael, beto, carlos;
        rafael = rafaelF(a,b);
        beto = betoF(a,b);
        carlos = carlosF(a,b);
        if(rafael > beto && rafael > carlos){
            cout<<"Rafael ganhou"<<endl;
        }else{
            if(beto > rafael && beto > carlos){
                cout<<"Beto ganhou"<<endl;
            }else{
                if(carlos > beto && carlos > rafael){
                    cout<<"Carlos ganhou"<<endl;
                }
            }
        }
    }
}