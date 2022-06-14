#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	int  aux, VN, VM, n100, n50, n20, n10, n5, n2, m1r, m50, m25, m10, m5, m1;
	double VT;
	string nn, mm;
		cin >> VT;
            aux = VT * 100;
			VN =  aux / 100;
			VM = aux % 100;
			n100 = VN/100;
            VN = VN%100;
			n50 = VN/50;
            VN = VN%50;
			n20 = VN/20;
            VN = VN%20;
			n10 = VN/10;
            VN = VN%10;
            n5 = VN/5;
            VN = VN%5;
            n2 = VN/2;
            m1r = VN%2;
            
			m50 = VM/50;
            VM = VM%50;
			m25 = VM/25;
            VM = VM%25;
			m10 = (VM/10);
            VM = VM%10;
			m5 = (VM/5);
            m1 = (VM%5);

		cout << "NOTAS:" << endl;
		cout << n100 << " nota(s) de R$ 100.00" << endl;
		cout << n50 << " nota(s) de R$ 50.00" << endl;
		cout << n20 << " nota(s) de R$ 20.00" << endl;
		cout << n10 << " nota(s) de R$ 10.00" << endl;
		cout << n5 << " nota(s) de R$ 5.00" << endl;
		cout << n2 << " nota(s) de R$ 2.00" << endl;
		cout << "MOEDAS:" << endl;
		cout << m1r << " moeda(s) de R$ 1.00" << endl;
		cout << m50 << " moeda(s) de R$ 0.50" << endl;
		cout << m25 << " moeda(s) de R$ 0.25" << endl;
		cout << m10 << " moeda(s) de R$ 0.10" << endl;
		cout << m5 << " moeda(s) de R$ 0.05" << endl;
		cout << m1 << " moeda(s) de R$ 0.01" << endl;	

}