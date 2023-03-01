#include <iostream>
 
using namespace std;

//true = primo false = nao primo
bool primofast(int n){
    int divisor = n/2;
    while(divisor>1){
        if(n%divisor==0 &&  n != 2)
            return false;
        
        divisor--;
    }
    return true;
}

int main() {
 
    int n, primoMenor=0, primoMaior=0, dif =3;
    cin>>n;
    
    //primoMenor
    
      
    int i = n;
    while(primoMenor == 0){
        if(primofast(i) && primofast(i-2)){
            primoMenor = i;
            primoMaior = i-2;
        }
        i--;
    }
        
        //primoMaior
        
    cout<<primoMaior<< " "<<primoMenor<<endl;
    
 
    return 0;
}