#include <iostream>
 
using namespace std;
 
int main() {
	int N;
	int a = 1;
	
	cin >> N;
	
	for(int i = 0 ; i < N ; i++)
	{
		cout << a << " " << a*a << " " << a*a*a << endl;
		a++;
	}		
	
    return 0;
}