#include<stdio.h>
#include<math.h>
using namespace std;

int main(){

    int n,a,b,c;
    float x1,x2,delta;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){

        scanf("%d %d %d", &a, &b, &c);
        delta = pow(b,2)- (4*a*c);
        x1 = -(b)/(2*a);
        x2 =  -1*delta/(4*a);
        if(x1>x2)
            printf("%.2f\n", x1);
        else
            printf("%.2f\n", x2);
    }
    

}