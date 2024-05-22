#include<bits/stdc++.h>

using namespace std; 
#define ll long long int 
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pb push_back 
#define get(a) ll a ; cin>>a ;
#define rep(i,n) for(ll i=0 ; i< n; i++)   
#define f first 
#define s second

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    get(n) ; 
    vi a(n)  ; rep(i,n) cin>>a[i] ; 
    sort(a.begin() , a.end()) ; 
    ll m = a[n/2] , ans =0  ; 
    rep(i,n) ans+= abs(a[i]-m) ; 
    cout<<ans ;
     return 0 ; 
}
