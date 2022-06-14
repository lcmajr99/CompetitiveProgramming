#include <iostream>
 
using namespace std;
 
int main() {
 
    int a;
    float b,c;
    
    cin>>a;
    for(int i = 0; i<a;i++){
        cin>>b>>c;
        if(c!=0){
            b = b/c;
            printf("%.1f\n",b);
        }
        else
            cout<<"divisao impossivel"<<endl;
    }
 
    return 0;
}