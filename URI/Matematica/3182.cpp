#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,orcamento,h,w,camas;
    cin>>n>>orcamento>>h>>w;
    double preco, ot, mp=1000000000;
    bool flag, flagO =false;
    for(int i =0; i<h ; i++){
        cin>>preco;
        flag = false;
        if(preco*n > orcamento){
            //NAO PODE SER ESSE HOTEL
            for(int j=0; j<w; j++)
                cin>>camas;
            continue;    
        }
        for(int j=0; j<w; j++){
            cin>>camas;
            if(camas >= n){
                ot = preco*n;
                if(orcamento >= ot && ot < mp){
                 flagO = true;
                 mp=ot;
                }
            }
        }
    
    }
    if(flagO)
        cout<<mp<<endl;
    else{
        cout<<"stay home"<<endl;
    } 
    return 0;
}
