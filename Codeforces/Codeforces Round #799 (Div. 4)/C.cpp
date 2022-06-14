#include<bits/stdc++.h>
using namespace std;
 
char mat[8][8];
/* 
            00  01  02
            10  11  12
            20  21  22
 
        */
bool bh(int x, int y){
 
    if(mat[x-1][y-1]== '#' && mat[x-1][y+1]== '#' && mat[x+1][y-1]== '#' && mat[x+1][y+1]== '#')
        return true;
 
    return false;
}
 
int main(){
    int a;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        bool flag = false;
        int px, pj;
        for (int j = 0; j < 8; j++)
        {
            for (int  z = 0; z < 8; z++)
            {
                cin>>mat[j][z];
            }
            
        }
        for (int j = 1; j < 7; j++)
        {
            for (int  z = 1; z < 7; z++)
            {
                flag =  bh(j,z);
                if(flag){
                    px = j+1;
                    pj = z+1;
                }
                    
            }
            
        }
        cout<<px<<" "<<pj<<endl;
        
        
        /* code */
    }
 
    
 
}