#include<stdio.h>

using namespace std;

int main(){

    int n;
    int item, qtd;
    double total = 0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d", &item, &qtd);
        if(item == 1001)
            total += qtd*1.5;
        else{
            if(item == 1002){
                total += qtd*2.5;
            }else{
                if(item == 1003){
                    total +=qtd*3.5;
                }else{
                    if(item == 1004){
                        total += qtd*4.5;
                    }else{
                        total +=qtd*5.5;
                    }
                }
            }
        }
    }
    printf("%.2f\n", total);

}