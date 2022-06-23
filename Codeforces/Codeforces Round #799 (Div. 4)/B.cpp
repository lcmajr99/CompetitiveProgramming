#include<bits/stdc++.h>

using namespace std;


int main (){

    int count;
    cin>>count;
    while (count--)
    {
        set <int> a;
        int n;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            int d1;
            cin>>d1;
            a.insert(d1);
            /* code */
        }
        if((n%2 != 0) && (a.size() % 2 == 0 ) or (n%2 == 0 && a.size()%2 !=0))
         cout<<a.size()-1<<endl;
        else    cout<<a.size()<<endl;
        
        /* code */
    }
    


}