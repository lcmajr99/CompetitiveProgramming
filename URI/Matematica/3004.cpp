#include <iostream> 
using namespace std;

int main(){
    int a, p1,p2,l1,l2;
    cin>>a;
    while(a--){
        cin>>p1>>p2>>l1>>l2;

        if((p1<l1 && p2 <l2) ||  (p1<l2 && p2<l1))
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;
    }
}