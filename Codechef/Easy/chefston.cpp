#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n],b[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        ll l,max=0;
        for(ll i=0;i<n;i++){
            l=(k/a[i])*b[i];
            if(l>max){
                max=l;
            }
        }
        cout<<max<<"\n";
    }
    return 0;
}