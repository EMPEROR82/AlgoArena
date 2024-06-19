#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pb push_back
#define rep(i, n) for (ll i = 0; i < n; i++)
const ll mod = 1e9+7; 
const ll inf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll x, y, n, m;
    cin >> n >> m;
    vi a(n);
    vector<bool> vis(n, false); 
    vi team(n, inf); 
    vvi adj(n);
    while (m--) {
        cin >> x >> y;
        adj[x - 1].pb(y - 1);
        adj[y - 1].pb(x - 1);
    }

    bool is_bipartite = true;

    rep(i, n) {
        if (!vis[i]) {
            vis[i] = true;
            queue<ll> q; 
            q.push(i);
            team[i] = 0;

            while (!q.empty()) {
                ll v = q.front(); q.pop();
                ll t = team[v];
                for (auto u : adj[v]) {
                    if (vis[u]) {
                        if (team[u] == t) {
                            is_bipartite = false; 
                            cout << "IMPOSSIBLE"; 
                            return 0;
                        }
                    } else {
                        vis[u] = true; 
                        q.push(u); 
                        team[u] = 1 - team[v];
                    }
                }
            }
        }
    }
    rep(i, n) cout << team[i] + 1 << " ";
    return 0;
}
