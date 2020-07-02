//git push -u origin master
//01-06-20
//Author : Ashutosh gugnani


//M: inside for loop the data type of i 
//   defing long long where req, and shortcuts

#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define pb push_back
#define rep(i,n) for(i=0;i<n;i++)
void input(vector<ll>& v,ll n){ ll i,io; rep(i,n) { cin>>io; v.pb(io);} } 

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> a;
        for(ll i=0;i<n;i++){
            ll temp;
            cin>>temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end(),greater<ll>());
        ll ans=0;
        for(ll i=0;i<n;i+=2){
            ans=ans+a.at(i);
        }
        cout<<ans<<"\n";
    }

    return 0;
}