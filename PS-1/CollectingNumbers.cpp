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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n , x , ans = 1; cin>>n ; 
    vi a(n)  ; rep(i,n) cin>>a[i] ; 
    vi b(n+1) ;
    rep(i,n){
        b[a[i]] = i+1 ; 
    }
    for(ll i=1 ; i<n ; i++) if(b[i]>b[i+1]) ans++ ;
    cout<<ans ;
    return 0 ; 
}
// 4 2 5 1 3
// 1 2 3 4 5 
// 3 4 5 2 1