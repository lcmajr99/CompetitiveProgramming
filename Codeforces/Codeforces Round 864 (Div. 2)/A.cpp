#include<iostream>

using namespace std;

int main(){
    int n,i,j,a,b,x,y,inicio,fimI,fimJ;
    cin>>n;
    while(n--){
        cin>>i>>j;
        //inio e fim
        cin>>a>>b>>x>>y;
        inicio = 1;
        fimI = i;
        fimJ = j;

        if((a == inicio && b == inicio) || (a == inicio && b == fimJ) || (a == fimI && b== fimJ) || (a==fimI && b == inicio) ||
            (x == inicio && y == inicio) || (x == inicio && y == fimJ) || (x == fimI && y== fimJ) || (x==fimI && y == inicio) ){
            cout<<2<<endl;
        }else{ 
            if(a == inicio && b != inicio || (a == inicio && b != fimJ) || (a == fimI && b != fimJ) || (a == fimI && b != inicio) ||
                (a != inicio && b == inicio) || (a != inicio && b == fimJ) || (a != fimI && b== fimJ) || (a != fimI && b == inicio) ||
                (x == inicio && y != inicio) || (x == inicio && y != fimJ) || (x == fimI && y != fimJ) || (x == fimI && y != inicio) ||
                (x != inicio && y == inicio) || (x != inicio && y == fimJ) || (x != fimI && y== fimJ) || (x != fimI && y == inicio) ){
                    cout<<3<<endl;
            }else{
                cout<<4<<endl;
            }
        }

    }
}