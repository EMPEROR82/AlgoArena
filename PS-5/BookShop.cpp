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
const ll N = 1e5+5 ; 
const ll m = 1005 ; 

ll dp[N][m] ;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n , x ; cin>>n>>x ; 
    vi s(n) , h(n+1) ; 
    rep(i,n) cin>>h[i] ; 
    rep(i,n) cin>>s[i] ; 

    rep(i,N){
        rep(j,m){
            if(i+h[j] < N ){
                dp[i+h[j]][j+1] = max(dp[i+h[j]][j+1] , s[j]+dp[i][j]) ; 
            }
        }
    }
    ll ans = 0  ; 
    for( ll i = 0 ; i<=x ; i++){
        ans = max(ans , dp[i][n+1]) ; 
    }
    cout<<ans<<endl ;
    return 0;
}
