#include<bits/stdc++.h>

using namespace std; 
#define ll long long int 
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pb push_back 
#define get(a) ll a ; cin>>a ;
#define rep(i,n) for(ll i=0 ; i< n; i++)   
#define f first 
#define s second

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n , m , x; cin>>n>>m ; 
    multiset<ll> t ; 
    rep(i,n){
        cin>>x ; 
        t.insert(x) ;
    }
    while(m--){
        cin>>x ; 
        auto it = t.upper_bound(x);
        if(it==t.begin()){
            cout<<-1<<endl ;
        }else{
            cout<<*(--it)<<endl ;
            t.erase(it) ;
        }
    }
}