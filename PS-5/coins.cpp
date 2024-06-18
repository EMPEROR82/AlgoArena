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
const ll inf = 1e18;
const long long int mod = 1e9 + 7;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n ;cin>>n ; 
    vector<ld> p(n) ; rep(i,n) cin>>p[i] ; 

    ld dp[n+1][n+1] ; 
    memset(dp , 0.0 , sizeof(dp)) ; 
    dp[0][0] = 1.0 ; 
    for(ll i = 1 ; i<=n ; i++){
        for(ll j = 0 ; j<= i ; j++){
            //p(i,j) p(i-1 , j-1)+
            dp[i][j] += dp[i-1][j]*(1-p[i-1]) ; 
            if(j) dp[i][j] += dp[i-1][j-1]*p[i-1] ; 
        }
    } 
    ld ans = 0.0 ; 
    for(ll i = n/2+1 ; i<=n ; i++) ans += dp[n][i] ; 
    cout<<fixed<<setprecision(10)<<ans ; 
    return 0;
}
