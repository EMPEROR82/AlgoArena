#include<bits/stdc++.h>

using namespace std ; 
#define ll long long int 
const long long int mod = 1e9+7 ; 
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pb push_back 
#define get(a) ll a ; cin>>a ;
#define rep(i,n) for(ll i=0;i<n;i++)
const ll N = 1e5+5 ; 
ll dp[N] , cnt[N] ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t =1;// cin>>t ; 
    while(t--){
        ll n ,x; cin>>n ; 
        
        rep(i,n){
            cin>>x ; 
            cnt[x]++ ;
        }
        dp[1] = cnt[1] ;
        for(ll i = 2 ; i<N ; i++){
            dp[i] = max(dp[i-1] , dp[i-2]+cnt[i]*i);
        }
        cout<<dp[N-1]<<endl ;
    }
    return 0 ;
}
