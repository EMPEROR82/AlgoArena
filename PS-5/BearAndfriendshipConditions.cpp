#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pb push_back
#define s second 
#define f first 
#define rep(i, n) for (ll i = 0; i < n; i++)
const ll mod = 1e9+7; 
const ll inf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n , m , x , y ;cin>>n>>m ; 
    vvi adj(n); 
    vector<pair<ll,ll>> e ; 

    rep(i,m){
        cin>>x>>y ; 
        --x ; --y ; 
        adj[x].pb(y); adj[y].pb(x) ; 
        e.pb({x , y} ) ;
    }
    rep(i,n){
        adj[i].pb(i) ;
        sort(adj[i].begin(), adj[i].end()) ;
        
    }
    rep(i,m){
        x = e[i].f ; y = e[i].s ; 
        ll l1 = adj[x].size()  , l2  = adj[y].size() ; 

        if(l1!=l2){
            cout<<"NO" ; return 0 ; 
        }

        rep(j,l1){
            if(adj[x][j]!=adj[y][j]){
                cout<<"NO" ; return 0 ;
            }
        }
    }
    
    cout<<"YES" ;
    return 0;
}
