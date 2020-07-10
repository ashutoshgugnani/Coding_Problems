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
        int n;
        cin>>n;
        ll a_t=0;
        ll b_t=0;
        ll s=0;
        for(ll i=0;i<n;i++){
            ll a,b;
            cin>>a>>b;
            
            ll suma=0;
            ll sumb=0;
            while(a>0 && b>0){
                if(a<0){a=0;}
                if(b<0){b=0;}
                ll digita=a%10;
                ll digitb=b%10;
                suma+=digita;
                sumb+=digitb;
                a=(a-digita)/10;
                b=(b-digitb)/10;
            }
            if(suma>sumb)
                a_t+=1;
            else if(sumb>suma)
                b_t+=1;
            else if(suma==sumb)
                s+=1;
            else{}
        }
        if(a_t>b_t)
            cout<<"0"<<" "<<a_t<<endl;
        if(b_t>a_t)
            cout<<"1"<<" "<<b_t<<endl;
        if(a_t==b_t)
            cout<<"2"<<" "<<a_t+s<<endl;
    }
}