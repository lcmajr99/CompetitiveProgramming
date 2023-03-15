#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float sb,va,vb;
    float t0,sa;
    while(cin>>sb>>va>>vb){

        if(vb>=va){
            cout<<"impossivel"<<endl;
        }else{
            t0 = (sb/(va-vb))*1.0;
            printf("%.2f", t0);
            cout<<endl;
        }
        
    }
}