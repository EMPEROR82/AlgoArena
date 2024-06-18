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

    ll n , m ; cin>>n>>m ; 
    ll grid[n+1][m+1] ; 
    char x ; 
    rep(i,n){
        rep(j,m){
            cin>>x ; 
            if( x=='#') grid[i][j] = 0 ; 
            else grid[i][j] = 1 ; 
        }
    }
    ll ans[n][m] ; 
    memset(ans , 0 , sizeof(ans)) ; 
    ans[0][0] = 1 ; 
    rep(i,n){
        rep(j,m){
            if(grid[i][j] == 0 ) continue ;
            if(i) ans[i][j] += grid[i-1][j]*ans[i-1][j] ; 
            if(j) ans[i][j] += grid[i][j-1]*ans[i][j-1] ; 
            ans[i][j] %= mod ; 
        }
    }
    cout<<ans[n-1][m-1] ; 
    return 0;
}
