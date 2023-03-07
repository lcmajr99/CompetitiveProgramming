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
 
    int n, primos[10], countPrimo=0, sumPrimos=0, h=0, d=0;
    long long int distancia = 60000000;

    cin>>n;
    
    //primoMenor
    
      
    int i = n;

    while(countPrimo < 10){
        if(primofast(i)){
            primos[countPrimo]=i;
            sumPrimos+=i;
            countPrimo++;
        }
        i++;
    }
    h =(int)(distancia/sumPrimos);
    d =(int)h/24;
        //primoMaior
        
    cout<<sumPrimos<<" km/h"<<endl;

    cout<<h<<"h / "<<d<< " d"<< endl;
    return 0;
}