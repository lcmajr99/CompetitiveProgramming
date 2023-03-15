#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float x0,x1,x2,y0,y1,y2,d;
    int n;
    cin>>n;
    while(n--){
        cin>>x0>>y0>>x1>>y1>>x2>>y2;
        d =((x0*y1)+(y0*x2)+(x1*y2)-(y1*x2)-(x0*y2)-(y0*x1))/2;
        printf("%.3f", abs(d));
        cout<<endl;

    }
}