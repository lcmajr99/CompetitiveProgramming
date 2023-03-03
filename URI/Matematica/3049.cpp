#include<iostream>

using namespace std;

int main(){

    int t,b,a1,a2;
    cin>>b>>t;
    int x,y;
    x = 160;
    a1 = ((b+t)*70)/2;
    a2 = ((160-t + 160-b)*70)/2;
    if(a1>a2)
        cout<<1<<endl;
    else
        if(a1<a2)
            cout<<2<<endl;
        else
            cout<<0<<endl;
}