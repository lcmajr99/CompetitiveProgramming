/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    if((abs(b-c) < a && a < b+c) || (abs(a-c) < b && b < a+c) || (abs(a-b) < c && c< a+b) ){
        double perimetro = a+b+c;
        cout<<fixed<<setprecision(1);
        cout<<"Perimetro = "<<perimetro<<endl;
    }else{
        double area = ((a+b)*c)/(2);
        cout<<fixed<<setprecision(1);
        cout<<"Area = "<<area<<endl;
    }

    return 0;
}
