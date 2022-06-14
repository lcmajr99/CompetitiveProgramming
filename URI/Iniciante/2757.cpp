#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main ()
{
	int A, B, C;
	
	cin >> A >> B >> C;
	
	cout << "A = " << A << ", B = " << B << ", C = " << C << endl;
	cout << "A = ";
	cout << setfill(' ') << setw(10);
	cout << A; 
	cout << ", B = ";
	cout << setfill(' ') << setw(10);
	cout << B; 
	cout << ", C = ";
	cout << setfill(' ') << setw(10);
	cout << C << endl; 
	
	if (A >= 0)
	{
		cout << "A = ";
		cout << setfill('0') << setw(10);
		cout << A; 
	}
	else
	{
		cout << "A = -";
		cout << setfill('0') << setw(9);
		cout << abs(A);  
	}
	if (B >= 0)
	{
		cout << ", B = ";
		cout << setfill('0') << setw(10);
		cout << B; 
	}
	else
	{
		cout << ", B = -";
		cout << setfill('0') << setw(9);
		cout << abs(B);  
	}
	if (C >= 0)
	{
		cout << ", C = ";
		cout << setfill('0') << setw(10);
		cout << C << endl; 
	}
	else
	{
		cout << ", C = -";
		cout << setfill('0') << setw(9);
		cout << abs(C) << endl;  
	} 
	
	cout << "A = ";
	cout << setfill(' ') << setw(10);
	cout << left << A; 
	cout << ", B = ";
	cout << setfill(' ') << setw(10);
	cout << left << B; 
	cout << ", C = ";
	cout << setfill(' ') << setw(10);
	cout << left << C << endl; 
	

	
}