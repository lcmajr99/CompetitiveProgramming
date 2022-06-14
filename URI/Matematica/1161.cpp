#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long fat(long long a)
{
	if(a>1)
	{
		return a*fat(a-1);
	}
	else
	{
		if(a==0)
		{
			return 1;
		}
		return a;
	}
}
int main()
{
	long long unsigned a,b;
	
	while(scanf("%lld %lld",&a,&b)!=EOF)
	{
		a=fat(a);
		b=fat(b);
		cout<<a+b<<endl;
	}
}
