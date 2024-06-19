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

ll dx[] =  {1 , 0 , -1 , 0 } ; 
ll dy[] =  {0 , 1 , 0 , -1 } ;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll r , c ; cin>>r>>c ; 
    char g[r][c] ; 
    vector<pair<ll,ll>> q ;
    rep(i,r){
        rep(j,c){
            cin>>g[i][j] ;
            if(g[i][j] == 'S')  q.pb({i,j}) ; 
        }
    }
    ll n = q.size() ; 
    rep( i , n ){
        auto p = q[i] ; 
        rep(j,4){
            ll x = p.s+dx[j] ; 
            ll y = p.f+dy[j] ; 
            if( x<c && y<r && x>=0 && y>=0 ){
                if(g[y][x] == 'W'){
                    cout<<"NO\n" ; return 0 ;
                }
                else if( g[y][x] == '.') g[y][x] = 'D' ;
            }
        }
    }
    cout<<"YES\n" ;
    rep(i,r){
        rep(j,c){
            cout<<g[i][j] ;
        }
        cout<<endl ;
    }
    return 0;
    
}
