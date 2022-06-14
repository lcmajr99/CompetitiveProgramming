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
	int j,t,x;
	char a[6]={};
	
	while(scanf("%s",a)!='0')
	{
		int d=0;
		for (int i = 0; a[i]!='\0'; i++)
		{
			d++;
		}
		if(d==1 && a[0]=='0')
		{
			break;
		}
		j=0;
		for (int i = 0; i < d; i++)
		{
			t=a[i]-48;
			x=fat(d-i);
			j+=(t*x);
		}
		cout<<j<<endl;
	}
}
