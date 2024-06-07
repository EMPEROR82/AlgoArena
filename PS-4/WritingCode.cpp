#include<bits/stdc++.h>

using namespace std ; 
#define ll long long int 
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pb push_back 
#define get(a) ll a ; cin>>a ;
#define rep(i,n) for(ll i=0;i<n;i++)
#define ld long double
#define f first 
#define s second 
const ll inf = 1e18 ;
const long long int mod = 1e9+7 ; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n , m , b , x ; cin>>n>>m>>b>>x ; 
    vi a(n) ; rep(i,n) cin>>a[i] ;

    ll dp[m+1][b+1] ; 
    memset(dp ,  0 , sizeof(dp)) ;
    dp[0][0] = 1 ; 
    for( ll i = 0 ; i< n ; i++){
        for(ll j = 0 ; j<m ; j++){
            for(ll k = 0 ; k+a[i]<=b ; k++){
                 
                    dp[j+1][k+a[i]] = (dp[j+1][k+a[i]]+dp[j][k])%x ; 
                    
            }
        }
    }
    ll ans = 0 ; 
    for(ll i = 0 ; i<=b ; i++)ans = (ans+dp[m][i])%x; 
    cout<<ans<<endl ;
    return 0 ; 
}
 
