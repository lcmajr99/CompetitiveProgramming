#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,d1,d2;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>d1>>d2;
        cout<<(d1*d2)/2<<" cm2"<<endl;
    }
 
    return 0;
}