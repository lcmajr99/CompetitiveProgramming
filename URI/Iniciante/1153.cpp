#include <iostream>

using namespace std;

int main()
{
	int a,i,fat=1;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		fat*=i;
	}
	cout<<fat<<endl;
}
