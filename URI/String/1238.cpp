#include <iostream>

using namespace std;

int main()
{
	int n;
	
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		string a,b,c;
		cin>>a>>b;
		if(a.length()>b.length())
		{
			for (int j = 0; j < a.length(); j++)
			{
				if(j<b.length())
				{
					c+=a[j];
					c+=b[j];
				}
				else
					c+=a[j];
			}
			
		}
		else
		{
			for (int j = 0; j < b.length(); j++)
			{
				if(j<a.length())
				{
					c+=a[j];
					c+=b[j];
				}
				else
					c+=b[j];
			}
		}
		cout<<c<<endl;
		
	}
	
}
