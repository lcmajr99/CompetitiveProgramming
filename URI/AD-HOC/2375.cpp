#include <iostream>
#include <math.h> 
using namespace std;
 
int main() {
 
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    double VE,VP,r;
    if(a <= b && a <= c && a<=d){
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }

    return 0;
}