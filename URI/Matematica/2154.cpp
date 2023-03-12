#include<bits/stdc++.h>

using namespace std;

int main(){

    int a;
    string sinal;
    while(cin>>a){
        
        string palavra[a];
        for(int i =0; i<a; i++){
            cin>>palavra[i];
            if(i+1<a){
                cin>>sinal;
            }
        }
        for(int i = 0; i<a; i++){
            string c=palavra[i], aux="";
            int j=0;
            while(c[j]!='x'){
                aux+=c[j];
                j++;
            }
            int C = stoi(aux);
            j++;
            aux="";
            while(c[j]!=' ' && c[j]!='\0'){
                aux+=c[j];
                j++;
            }
            int E = stoi(aux);
            C*=E;
            E--;
            if(E>1){
                cout<<C<<"x"<<E;
            }else{
                if(E==1){
                    cout<<C<<"x";
                }else{
                    cout<<C;
                }
            }
            if(i+1 ==a)
                cout<<endl;
            else
                cout<<" + ";
        }

    }
}