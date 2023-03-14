#include <iostream>
using namespace std;

int main(){
    long long unsigned a,b, aux;
    cin>>a>>b;
    aux = a/b;
    if(aux <=9)
        cout<<"A UFSC fecha dia "<<21+aux<<" de setembro."<<endl;
    else cout<<"A UFSC fecha dia "<<aux-9<<" de outubro."<<endl;
}