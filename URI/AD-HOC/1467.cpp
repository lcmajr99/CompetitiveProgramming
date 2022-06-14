#include <iostream>

using namespace std;

int main()
{
    int a,b,c;


    while(scanf("%d %d %d", &a ,&b ,&c)!=EOF)
    if(a==b && a!=c)
    {
        printf("C\n");
    }
    else
    {
        if(a==c && b!=a)
        {
            printf("B\n");
        }
        else
        {
            if(b==c && a!=b)
            {
                printf("A\n");
            }
            else
            {
                printf("*\n");
            }
        }
    }
}
