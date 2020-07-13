#include<bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define TEST ll t; cin>>t; while(t--)

long long int digsum(long long int n){
    long long int ans=0,digit;
    while(n>0){
        digit=n%10;
        n=n/10;
        ans+=digit;
    }
    return ans;
}

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a,b,a_t=0,b_t=0;
        
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(digsum(a)>digsum(b))
                a_t++;
            else if(digsum(a)<digsum(b))
                b_t++;
            else{
                a_t++;
                b_t++;
            }
        }

        if(a_t>b_t)
            cout<<0<<" "<<a_t<<endl;
        else if(a_t<b_t)
            cout<<1<<" "<<b_t<<endl;
        else
            cout<<2<<" "<<a_t<<endl;
    }
    return 0;
}
