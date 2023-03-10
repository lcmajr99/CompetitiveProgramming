#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,i=0,n1,n2;
    string aux="",palavra;
    cin>>a;
    getchar();
    getline(cin, palavra);
    while(palavra[i] != ' '){
        aux+=palavra[i];
        i++;
    }
    i++;
    n1 = stoi(aux);
    aux="";
    if(palavra[i]=='+'){
        i+=2;
        while(palavra[i] != '\0'){
            aux+=palavra[i];
            i++;
        }
        n2 = stoi(aux);
        if(n1+n2 >  a){
            cout<<"OVERFLOW"<<endl;
        }else{
            cout<<"OK"<<endl;
        }
    }else{
        i+=2;
        while(palavra[i]!= '\0'){
            aux+=palavra[i];
            i++;
        }
        n2 = stoi(aux);
        if(n1*n2 >  a){
            cout<<"OVERFLOW"<<endl;
        }else{
            cout<<"OK"<<endl;
        }
    }
    
 
    return 0;
}