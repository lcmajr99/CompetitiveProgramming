#include <bits/stdc++.h>
using namespace std;
int main()
{
	map <string,string>natal;
	natal.insert(pair<string,string>("brasil","Feliz Natal!"));
	natal.insert(pair<string,string>("alemanha","Frohliche Weihnachten!"));
	natal.insert(pair<string,string>("austria","Frohe Weihnacht!"));
	natal.insert(pair<string,string>("coreia","Chuk Sung Tan!"));
	natal.insert(pair<string,string>("espanha","Feliz Navidad!"));
	natal.insert(pair<string,string>("grecia","Kala Christougena!"));
	natal.insert(pair<string,string>("estados-unidos","Merry Christmas!"));
   	natal.insert(pair<string,string>("australia","Merry Christmas!"));
	natal.insert(pair<string,string>("inglaterra","Merry Christmas!"));
	natal.insert(pair<string,string>("portugal","Feliz Natal!"));
	natal.insert(pair<string,string>("suecia","God Jul!"));
	natal.insert(pair<string,string>("turquia","Mutlu Noeller"));
	natal.insert(pair<string,string>("argentina","Feliz Navidad!"));
	natal.insert(pair<string,string>("chile","Feliz Navidad!"));
	natal.insert(pair<string,string>("mexico","Feliz Navidad!"));
	natal.insert(pair<string,string>("antardida","Merry Christmas!"));
	natal.insert(pair<string,string>("canada","Merry Christmas!"));
	natal.insert(pair<string,string>("irlanda","Nollaig Shona Dhuit!"));
	natal.insert(pair<string,string>("belgica","Zalig Kerstfeest!"));
	natal.insert(pair<string,string>("italia","Buon Natale!"));
	natal.insert(pair<string,string>("libia","Buon Natale!"));
	natal.insert(pair<string,string>("siria","Milad Mubarak!"));
	natal.insert(pair<string,string>("marrocos","Milad Mubarak!"));
	natal.insert(pair<string,string>("japao","Merii Kurisumasu!"));
	string a;
	map<string,string>::iterator it;
	while(cin>>a)
	{
		if(natal.find(a)==natal.end())
		{
			puts("--- NOT FOUND ---");
		}
		else
		{
			it=natal.find(a);
			cout<<it->second<<endl;
		}
	}
}
