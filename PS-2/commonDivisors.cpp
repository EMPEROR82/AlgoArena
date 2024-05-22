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
const long long int mod = 1e9+7 ;

 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n ,  m =0  ; cin>>n ; 
    vi a(n) ; rep(i,n){ cin>>a[i]; m= max(m,a[i]) ;}
    vi count(m+1, 0);
    rep(i,n) count[a[i]]++ ;
    for(ll i = m ; i>=1 ; i--){
        if(count[i]>=2){
            cout<<i ; return 0 ;
        }
        ll j = i ; 
        ll cnt = 0 ;
        while(j<= m){
            cnt+= count[j] ; j+= i ;
        }
        if(cnt>=2){
            cout<<i ; return 0 ; 
        }
    }
    return 0 ;
}    