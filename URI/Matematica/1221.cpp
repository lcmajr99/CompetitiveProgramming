#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n,a,b,j,i,d=0;
	cin>>n;
	for(j=0;j<n;j++)
	{
		cin>>a;
		if(a==1)
		{
			cout<<"Not Prime"<<endl;
		}
		else
		{
			b=sqrt(a);
			for(i=2;i<=b;i++)
			{
				if(a%i==0)
				{
					d++;
				}
			}
			if(d==0)
			{
				cout<<"Prime"<<endl;
			}
			else
			{
				cout<<"Not Prime"<<endl;
			}
			d=0;
		}	
	}

}
