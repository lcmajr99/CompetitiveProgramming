#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	int n,m;
	cin>>n>>m;
	while(n!=0 || m!=0)
	{
	    int b,x;
		set<int>a;
		set<int>p;
		set<int>q;
		for (int i = 0; i < n; i++)
		{
			cin>>b;
			a.insert(b);
			q.insert(b);
		}
		for (int i = 0; i < m; i++)
		{
			cin>>b;
			p.insert(b);
			q.insert(b);
		}
		
		if(p.size()>a.size())
		{
			x=q.size()-p.size();
		}
		else
		{
			x=q.size()-a.size();
		}
		cout<<x<<endl;
		cin>>n>>m;
	}
}
