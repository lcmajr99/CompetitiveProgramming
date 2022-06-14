#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	queue<int> a;
	int i,n,j;
	cin>>n;
	while(n!=0)
	{
		if(n==1)
		{
		
			cout<<"Discarded cards:"<<endl;
			cout<<"Remaining card: 1"<<endl;
			
		}
		else
		{
			for ( i = 1; i <= n; i++)
			{
				a.push(i);
			}
			cout<<"Discarded cards: ";
			i=0;
			while(a.size()>2)
			{
				
				cout<<a.front()<<", ";
				a.pop();
				j=a.front();
				a.push(j);
				a.pop();
				
			}

			
			cout<<""<<a.front()<<endl;
			a.pop();
			cout<<"Remaining card: "<<a.front()<<endl;
			
			a.pop();
			getchar();

		}
		cin>>n;
	}
	
	
}
