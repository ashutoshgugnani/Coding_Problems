#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll ans=0;
        ll temp;
        cin>>temp;
	    ll currentString=temp;
	    for(ll i=0;i<n-1;i++){
	        cin>>temp;
            if(temp!=currentString)
	            ans=ans+abs(temp-currentString)-1;
	        currentString=temp;
	    }
	    cout<<ans<<endl;
	}
	
	return 0;
}
