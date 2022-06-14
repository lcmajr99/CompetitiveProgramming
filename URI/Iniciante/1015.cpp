#include <bits/stdc++.h>

using namespace std;

int main()
{
    float x1,y1,x2,y2,distancia;
    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);
    distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("%.4f\n",distancia);
}
