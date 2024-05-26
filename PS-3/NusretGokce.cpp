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
const ll mod = 1e9+7 ;
const ll N = 350000 ; 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n ,m ; cin>>n>>m ; 
    vi a(n) ; rep(i,n) cin>>a[i]  ; 
    ll ind = 0  ; 
    for(ll i = 1 ; i<n-1 ; i++) a[i] = max({a[i] , a[i+1]-m , a[i-1]-m} ) ; 
    for(ll i = n-2 ; i>0 ; i--) a[i] = max({a[i] , a[i+1]-m , a[i-1]-m} ) ; 
    a[0] = max(a[1]-m , a[0]) ; 
    a[n-1] = max(a[n-2]-m , a[n-1]) ;
     rep(i,n) cout<<a[i]<<" " ;
    return 0 ;  
}