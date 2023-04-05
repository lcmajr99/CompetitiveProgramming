#include<stdio.h>
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int a;
    scanf("%d", &a);
    while(a--){
        bool flag = false;
        string t;
        int value, tamanho;
        cin>>tamanho;
        cin>>value;
        getchar();
        cin>>t;
        for(int i =0; i<=tamanho && !flag; i++){
            if(value > t[i]-'0'){
                t.insert(i, to_string(value));
                flag = true;
            }
        }
        cout<<t<<endl;
    }
}