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

    ll n ; cin>>n ; 
    if(n%4 == 1 || n%4 == 2){
        cout<<0; 
        return 0 ; 
    }
    ll s = ((n+1)*n)/2 ; 
    ll t= s/2 ; 
    ll dp[n+1][t+1]; 
    memset(dp , 0 , sizeof(dp)) ; 
    dp[0][0]=1 ;
    //dp[i][j] : first i numbers se sum j banane ke methods 
    for(ll i = 1 ; i<=n ;i++){
        for(ll j = 0 ; j<=t ; j++){
            dp[i][j] += dp[i-1][j] ; 
            if( j-i>=0 ) dp[i][j] += dp[i-1][j-i] ; 
            dp[i][j]%=mod ;
        }
    }
    cout<<dp[n-1][t]<<endl ; 
    return 0;
    
}
