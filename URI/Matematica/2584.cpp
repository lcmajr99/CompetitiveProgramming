#include<stdio.h>
#include<math.h>
using namespace std;

int main(){

    double a,l;
    double p1,p2,mat;
    scanf("%lf", &a);

    for(int i =0; i< a; i++){
        scanf("%lf", &l);
        p2 = pow(l,2);
        mat= p2*0.25*sqrt(5 * (5 + 2 * sqrt(5)));

        printf("%.3lf\n", mat);
    }
}