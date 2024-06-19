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

    ll n  , sum =0 ; cin>>n ; 
    vi a(n) ; rep(i,n) {cin>>a[i] ; sum+= a[i] ; }

    ll dp[n][n] ;  
    for(ll l = n-1 ; l>=0 ; l--){
        for(ll r = l ; r<n ;r++){
            if(l==r) dp[l][r] = a[l] ; 
            else dp[l][r] = max(a[l]-dp[l+1][r] , a[r]-dp[l][r-1]) ; 
        }
    }
    cout<<(sum+dp[0][n-1])/2 ; 
    return 0;
}
