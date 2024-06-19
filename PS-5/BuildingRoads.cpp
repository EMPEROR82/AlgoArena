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
const long long int N = 1e5+5;

vvi adj(N) ; 
vector<bool> vis(N , false ) ;
ll n , m ;

void dfs( ll v){
    vis[v] = true ;

    for(auto u : adj[v]){
        if(!vis[u]) dfs(u) ; 
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll x , y ;
    cin>>n>>m ; 
    while(m--){
        cin>>x>>y   ; 
        adj[x-1].pb(y-1) ; adj[y-1].pb(x-1) ;
    }
    vi e ; 
    rep(i,n){
        if(!vis[i]){
            e.pb(i) ; 
            dfs(i) ; 
        }
    }
    ll len = e.size(); 
    cout<<(len-1)<<endl ;
    for(ll i =0 ; i<len-1 ; i++){
        
            cout<<1+e[i]<<" "<<1+e[i+1]<<endl ;
        
    }
    return 0;
}
