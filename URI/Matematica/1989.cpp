#include<stdio.h>
using namespace std;

int main(){
    int a,b,aux;
    long long sum;
    while(scanf("%d %d", &a, &b), a!=-1 || b!= -1){
        sum=0;
        for(int i = 0; i < a; i++){
            scanf("%d", &aux);
            sum += aux*(a-i);
        }
        
		printf("%lld\n",sum*b);
    }

}