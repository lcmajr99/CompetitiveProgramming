#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,c,e,g,x1,x2,j,t,i,q,h;
    char b,d,f;
    cin>>n;
    for(i=0;i<n;i++)
    {
        getchar();
        cin>>a>>b>>c>>d>>e>>f>>g;
        if(d=='+')
        {
            x1=(a*g+e*c);
            x2=(c*g);
        }
        else
        {
            if(d=='-')
            {
                x1=(a*g-e*c);
                x2=(c*g);
            }
            else
            {
                if(d=='*')
                {
                    x1=(a*e);
                    x2=(c*g);
                }
                else
                {
                    x1=(a*g);
                    x2=(e*c);
                }
            }
        }
        if(x1==0 || x2==0  || x1 == 1 || x2 == 1)
        {
            t=x1;
            j=x2;
          
        }
        else
        {
            if(x1 > 0 && x2 > 0)
            {
                for(q=1;q<=x1;q++)
                {

                    if(x2%q==0 && x1%q==0)
                    {
                        j=x2/q;
                        t=x1/q;
                    }
                }
            }
            else
            {
                if(x1>x2)
                {
                    h=x2;
                }
                else
                {
                    h=x1;
                }
                for(q=h;q<0;q++)
                {
                    if(q%x1==0 && q%x1==0)
                    {
                        j=x2/q*-1;
                        t=x1/q*-1;
                    }
                }
            }
        }
        cout<<x1<<"/"<<x2<<" = "<<t<<"/"<<j<<endl;
    }

    return 0;
}
