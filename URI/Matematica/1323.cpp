#include<iostream>

using namespace std;

int main()
{
	int a;
	while(cin>>a, a !=0)
	{
		int max=0,produto;
		for(int i=a;i>0;i--)
		{
			produto=i*i;
			max=max+produto;

		}
		
		cout<<max<<endl;
	
	}

}
