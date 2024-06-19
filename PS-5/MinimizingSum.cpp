#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define ld long double
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pb push_back
#define get(a) ll a; cin >> a;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define ld long double
#define f first
#define s second
#define print(a , n) for(ll i =0 ; i<n ; i++) cout<<a[i]<<" "; cout<<endl ;
#define input(a , n) rep(i,n) cin>>a[i] ;
const ll inf = 1e18;
const long long int mod = 1e9 + 7;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t ; cin>>t ; 
    while(t--){
        ll n , k , sum =0 ; cin>>n>>k ; 
        vi a(n) ; rep(i,n) cin>>a[i] ; 

        ll dp[n+1][k+1] ;
        rep(i,n+1){
            rep(j , k+1){
                dp[i][j] = inf ;
            }
        }
        dp[0][0] = 0 ; 
        //dp[i][j] : min sum if we do j operations on 1st i elements 
        rep( i , n){
            rep( j ,k+1){
                ll m = inf ; 
                for( ll x = 0 ; x+j  <= k && i+x < n  ; x++){
                    m = min( m , a[x+i]) ; 

                    dp[i+x+1][j+x] = min( dp[i+x+1][j+x] , ((x+1)*m + dp[i][j]) ) ; 
                }
            }
            // rep(i,n+1){
            //     rep(j,k+1){
            //         cout<<dp[i][j]<<" " ; 
            //     }
            //     cout<<endl ;
            // }
        }
        ll ans = inf  ; 
        for(auto it : dp[n]) ans = min(ans , it )  ;
        
        cout<<ans<<endl ;
    }
    return 0;
}
