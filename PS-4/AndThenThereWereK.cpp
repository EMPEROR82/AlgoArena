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
    
    ll t =1; cin>>t ; 
    while(t--){
        ll n ; cin>>n ; 
        ll p = log2(n) ; 
        cout<<(1<<p)-1<<endl ;
    }
    return 0 ;
}
