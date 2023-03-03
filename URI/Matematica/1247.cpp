#include<iostream>
#include<math.h>

using namespace std;

int main(){
    double a,vf,vg,ht,t1,t2;
    while(cin>>a>>vf>>vg){
        ht = sqrt(a*a + 144);
        t1 = ht/vg;
        t2 = 12/vf;
        if(t2<t1)
            cout<<"N"<<endl;
        else   
            cout<<"S"<<endl;

    }
  


}