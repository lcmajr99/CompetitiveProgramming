#include<bits/stdc++.h>

using namespace std;
long long fib[100000]={};

long long fat(long long a)
{
	if (fib[a]!=0)
	{
		return fib[a];
	}
	else
	{
		if(a<2)
		{
			if(a==1)
			{
				
				return 1;
			}
			return 0;
		}
		else
		{
			if(a>=2)
			{	fib[a]=fat(a-1)+fat(a-2);
				return fat(a-1)+fat(a-2);
			}
		}
	}
	return 0;
}
int main()
{
	long long n;
	while(cin>>n, n!=0)
	{
		cout<<fat(n+1)<<endl;
	}
}
