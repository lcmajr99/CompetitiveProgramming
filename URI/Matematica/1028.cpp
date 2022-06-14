#include<iostream>

using namespace std;

int rec(int a,int b)
{
	int aux;
	if(a%b!=0)
	{
		aux=b;
		b=a%b;
		a=aux;
		return rec(a,b);
	}
	else
	{
		return b;
	}
}
int main()
{
	int a,b,x,n;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		x=rec(a,b);
		cout<<x<<endl;
	}
}
