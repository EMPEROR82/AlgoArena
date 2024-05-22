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
    ll n ; cin>>n ; 
    vector<pair<ll,ll>> a(n) ; 
    rep(i,n) cin>>a[i].s>>a[i].f ; 
    sort(a.begin(),  a.end()) ;
    vi b(n) , c(n);
    rep(i,n) b[i] = a[i].f ;
    rep(i,n) c[i] = a[i].s ;
    ll i=1 , t=a[0].f , count = 1 ;
    
    while(i<n){
        if(a[i].s>=t){
            t = a[i].f ;
            count++ ;
        }
        i++ ; 
    }
    cout<<count ;
    return 0 ; 
}
