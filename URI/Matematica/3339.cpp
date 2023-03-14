#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    int a,x,y,x1,y1,cont=0;
    cin>>a;
    while(a--){
        cin>>x>>y;
        cont=0;
        x1 = sqrt(x);
        y1 = sqrt(y);
        for(int i = x1; i<=y1; i++){
            if(i*i >=x && i*i <= y)
                cont++;
        }
        cout<<cont<<endl;
    }

}