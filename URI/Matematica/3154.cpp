#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){

    int a,b;
    float pct = 1.0;
    cin>>a>>b;
    for(int i =0; i<b; i++){
        pct *= (1.0*a-i)/a; 
    }
    printf("%.2f", 100*(1-pct));
    cout<<endl;

}