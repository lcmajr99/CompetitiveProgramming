#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,cont = 0, sum,a;

    while(cin>>n, n!=-1){
        sum=0;
        for(int i = 0; i<n; i++){
            cin>>a;
            sum+=a;
            if(sum%100 ==0){
                cont++;
                sum=0;
            }
        }
        cout<<cont<<endl;
        cont=0;
    }
 
    return 0;
}