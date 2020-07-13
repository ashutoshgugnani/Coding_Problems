#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t; 
    while(t--){
        char chessBoard[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                chessBoard[i][j]='.';
            }   
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cout<<chessBoard[i][j]<<" ";
            }
            cout<<"\n";
        }
        int n;
        cin>>n;
        chessBoard[3][3]='O';

        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cout<<chessBoard[i][j]<<" ";
            }
            cout<<"\n";
        }
            
    }
    return 0;
}