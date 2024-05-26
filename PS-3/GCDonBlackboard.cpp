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
    
    ll n ; cin>>n ; 
    vi a(n) , b(n) , c(n) ; rep(i,n) cin>>a[i] ;
    b[0] = a[0] ; c[n-1] = a[n-1] ; 
    for(ll i = 1 ; i<n ; i++){
        b[i] = __gcd( b[i-1] , a[i]) ; 
        c[n-1-i] = __gcd(c[n-i] , a[n-1-i]) ; 
    }
    ll ans = max( b[n-2]  , c[1] ) ;
    
    for(ll i = 1; i<n-1 ; i++){
        ans = max(ans , __gcd(b[i-1] , c[i+1])) ; 
    }
    cout<<ans ;
    return 0 ; 
}