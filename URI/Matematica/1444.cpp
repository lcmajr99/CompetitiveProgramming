#include<iostream>
using namespace std;

int main(){

    long long unsigned n;

    while(cin>>n, n!=0){
        int sum=0;
        while(n/3 >0 && n!=1){
            if(n%3!=0){
                sum+= (n/3)+1;
                n= (n/3)+1;
            }
            else{
                sum+= n/3;
                n=n/3;
            }
        }
        cout<<sum-1+n%3<<endl;


    }
}