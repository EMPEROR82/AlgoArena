#include<bits/stdc++.h>

using namespace std ; 
#define ll long long int 
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pb push_back 
#define get(a) ll a ; cin>>a ;
#define rep(i,n) for(ll i=0;i<n;i++)
#define ld long double
#define f first 
#define s second 
const ll inf = 1e18 ;
const long long int mod = 1e9+7 ; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n , x ; cin>>n>>x ; 
    vi w(n) ; rep(i,n) cin>>w[i] ; 
    vector<pair<ll,ll>> dp( 1<<n) ; 
    dp[0] = { 1 , 0} ; 
    for( ll i =1 ; i<(1<<n) ; i++){
        dp[i] = {25 , inf} ; 
        rep( j , n){
            if( i & (1<<j)){
                auto p = dp[i^(1<<j)] ; 

                if( p.s + w[j] > x){
                    p.f ++ ; 
                    p.s = min(p.s , w[j]) ; 
                }else{
                    p.s += w[j] ; 
                }
                dp[i] = min(dp[i] , p) ; 
            }
        }
    }
    cout<<dp[(1LL<<n)-1].f ;
    return 0 ; 
}
 
