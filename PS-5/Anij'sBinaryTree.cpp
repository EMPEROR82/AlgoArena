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
const long long int N = 3e5+5;

ll dfs(ll v, const string &s, const vvi &adj, vector<bool> &vis) {
    vis[v] = true;
    if (adj[v][0] == -1 && adj[v][1] == -1) return 0;

    if (adj[v][0] == -1) return dfs(adj[v][1], s, adj, vis) + (s[v] != 'R');
    if (adj[v][1] == -1) return dfs(adj[v][0], s, adj, vis) + (s[v] != 'L');

    return min(dfs(adj[v][1], s, adj, vis) + (s[v] != 'R'), dfs(adj[v][0], s, adj, vis) + (s[v] != 'L'));
}

void solve() {
    ll n;
    string s;
    cin >> n >> s;
    ll x, y;
    vvi adj(n, vi(2, -1));
    vector<bool> vis(n, false);

    rep(i, n) {
        cin >> x >> y;
        adj[i][0] = --x;
        adj[i][1] = --y;
    }

    cout << dfs(0, s, adj, vis) << endl; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
