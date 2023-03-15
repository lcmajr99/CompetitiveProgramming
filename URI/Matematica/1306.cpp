#include <iostream>
using namespace std;

int main(){

    int a,b,rest,i=1;
    while(cin>>a>>b, a!=0 || b!= 0){
        rest = a-b;
        
        if(26*b<rest){
            cout<<"case "<<i<<": impossible"<<endl;
        }else{
            if(rest%b == 0){
                if(b>=a)
                    cout<<"case "<<i<<": "<<0<<endl;
                else
                    cout<<"case "<<i<<": "<<rest/b<<endl;
            }else{
                if(b>=a)
                    cout<<"case "<<i<<": "<<0<<endl;
                else
                    cout<<"case "<<i<<": "<<(rest/b)+1<<endl;
            }
        }    
        i++;
    }
    
}