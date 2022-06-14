#include <iostream>
 
using namespace std;
 
int main()
{
    int x=4;
    int y=3;
    int i,jogada,k,j=0;
    cin>>k;
    for(i=0;i<k && j==0;i++)
    {
        cin>>jogada;
 
        if(jogada==1)
        {
            x+=1;
            y+=2;
            if((x==1 && y==3)||(x==2 && y==3)||(x==2 && y==5)||(x==5 && y==4))
            {
                j++;
            }
        }
        else
        {
            if(jogada==2)
            {
                x+=2;
                y+=1;
 
            if((x==1 && y==3)||(x==2 && y==3)||(x==2 && y==5)||(x==5 && y==4))
            {
                j++;
            }
 
 
            }
            else
            {
                if(jogada==3)
                {
                    x+=2;
                    y-=1;
 
            if((x==1 && y==3)||(x==2 && y==3)||(x==2 && y==5)||(x==5 && y==4))
            {
                j++;
            }
 
                }
                else
                {
                    if(jogada==4)
                    {
                        x+=1;
                        y-=2;
 
            if((x==1 && y==3)||(x==2 && y==3)||(x==2 && y==5)||(x==5 && y==4))
            {
                j++;
            }
 
                    }
                    else
                    {
                        if(jogada==5)
                        {
                            x-=1;
                            y-=2;
                            if((x==1 && y==3)||(x==2 && y==3)||(x==2 && y==5)||(x==5 && y==4))
            {
                j++;
            }
 
 
 
 
                        }
                        else
                        {
                            if(jogada==6)
                            {
                                x-=2;
                                y-=1;
                                if((x==1 && y==3)||(x==2 && y==3)||(x==2 && y==5)||(x==5 && y==4))
            {
                j++;
            }
 
                            }
                            else
                            {
                                if(jogada==7)
                                {
                                    x-=2;
                                    y+=1;
                                    if((x==1 && y==3)||(x==2 && y==3)||(x==2 && y==5)||(x==5 && y==4))
            {
                j++;
            }
 
                                }
                                else
                                {
                                    if(jogada==8)
                                    {
 
                                        x-=1;
                                        y+=2;
                                        if((x==1 && y==3)||(x==2 && y==3)||(x==2 && y==5)||(x==5 && y==4))
            {
                j++;
            }
 
                                    }
                                }
 
                            }
                        }
                    }
                }
            }
 
        }
    }
    cout<<i<<endl;
    return 0;
}