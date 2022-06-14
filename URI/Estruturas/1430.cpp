#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<char> fila;
    string n;
    char z;
    int j,cont=0,x,i,A=0;
    float SOMA=0;
    cin>>n;
    while(n!="*")
    {
        A=0;
        j=n.length();
        for(i=1;i<j;i++)
        {
            if(n[i]!='/')
            {
                fila.push(n[i]);
                cont++;
            }
            else
            {
                for(x=0;x<cont;x++)
                {
                    z=fila.front();
                    if(z=='W')
                    {
                        SOMA=SOMA+1;
                    }
                    else
                    {
                        if(z=='H')
                        {
                            SOMA=SOMA+0.5;
                        }
                        else
                        {
                            if(z=='Q')
                            {
                                SOMA=SOMA+0.25;
                            }
                            else
                            {
                                if(z=='E')
                                {
                                    SOMA=SOMA+0.125;
                                }
                                else
                                {
                                    if(z=='S')
                                    {
                                        SOMA=SOMA+0.0625;
                                    }
                                    else
                                    {
                                        if(z=='T')
                                        {
                                            SOMA=SOMA+0.03125;
                                        }
                                        else
                                        {
                                            if(z=='X')
                                            {
                                                SOMA=SOMA+0.015625;
                                            }
                                            }
                                    }
                                }
                            }
                        }
                    }
                    fila.pop();
                }
                cont=0;
                if(SOMA==1.0)
                {
                    A++;
                }

            }
             SOMA=0;

        }


        cout<<A<<endl;;
        cin>>n;
    }
    return 0;
}
