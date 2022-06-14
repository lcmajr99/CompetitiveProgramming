#include<iostream>
using namespace std;


int main()
{

		int a;
		string b;
		string s= "";
		cin>>a;
		int k=0;
		while(k<a)
		{
			cin>>b;
			for (int i = b.length()-1; i >= 0; i--)
			{
				if(b[i]<=122 && b[i]>=96)
				{
					s=s+b[i];
				}
			}
			cout<<s<<endl;
			s="";
			k++;
		}

}
