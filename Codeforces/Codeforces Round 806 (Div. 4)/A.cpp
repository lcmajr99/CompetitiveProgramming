#include<iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        string palavra;
        cin>>palavra;
        if(palavra == "yes" or palavra =="Yes" or palavra =="yEs" or palavra =="yeS" or palavra =="yES" or palavra =="YES" or palavra =="YeS" or palavra == "YEs")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}