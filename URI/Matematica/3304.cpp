#include<iostream>

using namespace std;

int main(){
    int n,m,a1,a2,a3;
    scanf("%d", &n);

    while(n--){
        scanf("%d %d %d %d", &m, &a1, &a2, &a3);
        
        if(a1+a2+a3 > 1)
                printf("X\n");
        else{
            if(m == 0 && a1+a2+a3 == 1)
                printf("1\n");
            else{
                printf("0\n");
            }
        }
    }
}