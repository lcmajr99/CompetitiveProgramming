#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,cont = 1 ;

    while(cin>>n, n!=-1){
        cout<<"Experiment "<<cont<<": "<< n/2 <<" full cycle(s)"<<endl;
        cont++;
    }
 
    return 0;
}