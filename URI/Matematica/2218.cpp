#include <iostream>
 
using namespace std;

 
int main() {
    int m,n;
    cin>>m;
    while(m--){
        cin>>n;
        int inicial = 1;
        for(int i =0; i<=n; i++){
            inicial+=i;
        }
        cout<<inicial<<endl;
    }
   
    return 0;
}