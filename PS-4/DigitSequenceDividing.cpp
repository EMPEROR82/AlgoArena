#include<bits/stdc++.h>

using namespace std ; 
#define ll long long int 
const long long int mod = 1e9+7 ; 
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pb push_back 
#define get(a) ll a ; cin>>a ;
#define rep(i,n) for(ll i=0;i<n;i++)


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t ; cin>>t ; 
    while(t--){
        ll n ; string s ; 
        cin>>n>>s ; 
        if(n==2 && s[0]>=s[1]){
            
                cout<<"NO\n";
            
        }
        else{
            cout<<"YES\n"<<2<<endl ;
            cout<<s[0]<<" " ;
            rep(i,n-1)cout<<s[i+1] ;
            cout<<endl ;
        }
    }
    return 0 ;
}
