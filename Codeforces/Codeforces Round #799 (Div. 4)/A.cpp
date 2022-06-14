#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int a;
    int vet[4];
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 4; j++)
        {
 
            cin>>vet[j];
            /* code */
        }
        int timur = vet[0];
        sort(vet, vet+4);
        for (int j = 0; j < 4; j++)
        {
            if(vet[j]== timur)
                cout<<3-j<<endl;
        }
        
       
        /* code */
    }
 
    
 
}