#include <bits/stdc++.h>
using namespace std;
int bb(int x);
vector <int> V;
int main()
{
	int a,b,pp;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>b;
		V.push_back(b);
	}
	cin>>a;
	for (int i = 0; i < a; i++)
	{
		cin>>b;
		pp = bb(b);
		if(pp!= -1)
		{
			V.erase(V.begin()+pp);
		}
	}
	pp = (int)V.size();
	for (int i = 0; i <pp; i++)
	{
		if( !V[i] ) continue;
		if(i+1!=pp)
			cout<<V[i]<<" ";
		else
			cout<<V[i];
	}
	cout<<endl;
}
int bb(int x) {
   int aux = V.size();
   for (int i = 0; i < aux; i++)
   {
	   if(V[i] == x)
	   {
		   return i;
	   }
   }
   return -1;            
} 
