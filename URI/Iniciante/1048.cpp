#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
   /* 
   0 - 400.00       - 15%   
400.01 - 800.00     - 12%
800.01 - 1200.00    - 10%  
1200.01 - 2000.00   - 7%
Acima de 2000.00    - 4%  */
	double s, p, r, ns;
	int p1;
	cin>>s;
	cout<<fixed<<setprecision(2);
	if(s>=0.00 && s<=400.00)
	{
		p1=15;
		p = 0.15;
		r = s*p;
		ns = s+r; 
	}
		else
		{
			if(s>=400.01 && s<=800.00)
			{
				p1=12;
				p = 0.12;
				r = s*p;
				ns = s+r; 
			}
			else
			{
				if(s>=800.01 && s<=1200.00)
				{
					p1=10;
					p = 0.10;
					r = s*p;
					ns = s+r; 
				}
				else
				{
					if(s>=1200.01 && s<=2000.00)
					{
						p1=7;
						p = 0.07;
						r = s*p;
						ns = s+r; 
					}
					else
					{
						if(s>2000.00)
						{
							p1=4;
							p = 0.04;
							r = s*p;
							ns = s+r; 

						}
					}
				}
			}
		}
	cout<<"Novo salario: "<<ns<<"\n";
	cout<<"Reajuste ganho: "<<r<<"\n";
	cout<<"Em percentual: "<<p1<<" %\n";
}