#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        char chess[8][8];
        chess[0][0]='O';
        k--;
        for(int row=0;row<8;row++){
            for(int column=0;column<8;column++)
        {
                if(row==0 && column==0)
                continue;
                if(k)
                    {
                        chess[row][column]='.';
                        k--;
                    }
                else{
                chess[row][column]='X';
                    }
            
        }}
        for(int row=0;row<8;row++)
        {
            for(int column=0;column<8;column++)
            {
                cout<<chess[row][column];
            }
            cout<<endl;
        }

    }
}
