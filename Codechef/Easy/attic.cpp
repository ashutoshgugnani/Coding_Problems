// 02-07-2020
// Author : Ashutosh Gugnani

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    ll ans=0;
	    int temp=0;
        int count=0;
	    for(ll i=0;i<s.length();i++){
	        if(s[i]=='#'){
	            if(temp>count)
	                ans++;
	            count=max(count,temp);
	            temp=0;
	        }
            if(s[i]=='.'){
                temp++;
            }
	    }
        cout<<ans<<"\n";
	}
	
	return 0;
}