#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int dias,anos,anosr,meses,mesesr;
    cin>>dias;
    anos = dias/365;
    anosr = dias%365;
    meses = anosr/30;
    mesesr = anosr%30;
    cout<<anos<<" ano(s)"<<endl;
    cout<<meses<<" mes(es)"<<endl;
    cout<<mesesr<<" dia(s)"<<endl;
 
    return 0;
}