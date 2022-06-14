#include<bits/stdc++.h>

using namespace std;
int fat(int a,int &b)
{
	if(a<2)
	{
		if(a==1)
		{
			
			b++;
			return 1;
		}
		b++;
		return 0;
	}
	else
	{
		if(a>=2)
		{	
			b++;
			return fat(a-1,b)+fat(a-2,b);
		}
	}
}
int main()
{		
	int  n,c;
	cin>>c;
	for (int i = 0; i < c; i++)
	{
	
		cin>>n;
		int h=n,j=0;
		n=fat(n,j);
		if(j>1)
			j--;
		cout<<"fib("<<h<<") = "<<j<<" calls = "<<n<<endl;
	}
}
