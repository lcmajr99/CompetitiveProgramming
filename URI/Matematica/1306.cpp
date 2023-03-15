#include <iostream>
using namespace std;

int main(){

    int a,b,rest,i=1;
    while(cin>>a>>b, a!=0 || b!= 0){
        rest = a-b;
        
        if(26*b<rest){
            cout<<"Case "<<i<<": impossible"<<endl;
        }else{
            if(rest%b == 0){
                if(b>=a)
                    cout<<"Case "<<i<<": "<<0<<endl;
                else
                    cout<<"Case "<<i<<": "<<rest/b<<endl;
            }else{
                if(b>=a)
                    cout<<"Case "<<i<<": "<<0<<endl;
                else
                    cout<<"Case "<<i<<": "<<(rest/b)+1<<endl;
            }
        }    
        i++;
    }
    
}