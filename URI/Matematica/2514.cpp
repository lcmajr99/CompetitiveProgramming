#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int m;
	while(cin>>m)
	{
		int l1,l2,l3,mmc,div;
		bool flag1=false,flag2=false,flag3=false;
		cin>>l1>>l2>>l3;
		mmc=1;
		div=2;
		while(l1!=1 || l2!=1 || l3!=1)
		{
			if(l1%div==0)	l1/=div;
			else flag1=true;
			if(l2%div==0)	l2/=div;
			else flag2=true;
			if(l3%div==0)	l3/=div;
			else flag3=true;
			
			if(flag1==true && flag2==true && flag3==true)	
			{
				div++;
				flag1=flag2=flag3=false;
				
			}
			else
			{
				mmc*=div;
				flag1=flag2=flag3=false;
			}

		}
		cout<<mmc-m<<endl;
	}
}
