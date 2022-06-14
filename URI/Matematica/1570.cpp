#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	//isola x
	int n,cont=1;
	scanf("%d",&n);
	while(n--)
	{
		long long int X,X1,Y,Y1,delta,a,b,c,p,q,x1,x2,RX,RY;
		cin>>p>>q;
		
		a=2;
		b=(-3*p)-q;
		c=pow(p,2);
		delta=(pow(b,2)-(4*a*c));
		
		x2=(-b-sqrt(delta))/(2*a);
		x1=(-b+sqrt(delta))/(2*a);

		
		long long int deltay,ay,by,cy,y1,y2;
		ay=2;
		by=(-3*q)-p;
		cy=pow(q,2);
		deltay=(pow(by,2)-(4*ay*cy));
		
		y1=(-by+sqrt(deltay))/(2*ay);
		y2=(-by-sqrt(deltay))/(2*ay);
		
		
		Y=sqrt(x1);
		Y1=sqrt(x2);
		X=sqrt(y1);
		X1=sqrt(y2);
		
		long long int menor = 2147483646;
		int MX=0;
		int MY=0;
		if(Y!=0)		
		RX=(p/Y)-Y;
		if(((RX+Y)*Y==p && abs(RX-Y)*RX==q) && RX >= Y && RX<=menor)
		{
			menor=RX;
			MX=RX;
			MY=Y;	
		}
		else
		{
			if(Y1!=0)
			RX=(p/Y1)-Y1;
			if(((RX+Y1)*Y1==p && abs(RX-Y1)*RX==q) && RX >= Y1 && RX<=menor)
			{
				menor=RX;
				MX=RX;
				MY=Y1;
			}
			else
			{
				if(X!=0)
				RY=(-q/X)+X;
				if(((X+RY)*RY==p && abs(X-RY)*X==q) && X >= RY && RX <= menor)
				{
					menor=X;
					MX=X;
					MY=RY;
				}
				else
				{
					if(X1!=0)
					RY=(-q/X1)+X1;
					if(((X1+RY)*RY==p && abs(X1-RY)*X1==q) && X1 >= RY && RX <=menor)
					{
						menor=X1;
						MX=X1;
						MY=RY;
					}
				}
			}
			
		}
	
		
		Y1*=-1;
		X*=-1;
		X1*=-1;
		Y*=-1;
		if(Y!=0)
		RX=(p/Y)-Y;
		if(((RX+Y)*Y==p && abs(RX-Y)*RX==q) && RX<=menor)
		{
			menor=RX;
			MX=RX;
			MY=Y;
		}
		else
		{
			if(Y1!=0)
			RX=(p/Y1)-Y1;
			if(((RX+Y1)*Y1==p && abs(RX-Y1)*RX==q) && RX >= Y1 && RX<=menor)
			{
				menor=RX;
				MX=RX;
				MY=Y1;
			}
			else
			{
				if(X!=0)
				RY=(-q/X)+X;
				if(((X+RY)*RY==p && abs(X-RY)*X==q) && X >= RY && RX <= menor)
				{
					menor=X;
					MX=X;
					MY=RY;
				}
				else
				{
					if(X1!=0)
					RY=(-q/X1)+X1;
					if(((X1+RY)*RY==p && abs(X1-RY)*X1==q) && X1 >= RY  && RX <=menor)
					{
						menor=X1;
						MX=X1;
						MY=RY;
					}
				}
			}			
		}
		if(MX!=0 || MY!=0)
		{
			cout<<"Case "<<cont<<":\n"<<MX<<" "<<MY<<endl;
		}
		else
		{
			if(p==0 && q==0)
			{
				cout<<"Case "<<cont<<":\n"<<p<<" "<<q<<endl;
			}
			else
			{
				printf("Case %d:\nImpossible.\n",cont); 
			}
		}
		cont++;
		
	}
	
}
