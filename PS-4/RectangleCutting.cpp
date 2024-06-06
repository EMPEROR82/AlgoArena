#include<bits/stdc++.h>

using namespace std ; 
#define ll long long int 
const long long int mod = 1e9+7 ; 
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pb push_back 
#define get(a) ll a ; cin>>a ;
#define rep(i,n) for(ll i=0;i<n;i++)
#define ld long double
const ll inf = 1e18 ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll a, b ; cin>>a>>b ; 
    ll dp[a+1][b+1] ; 

    memset(dp , inf , sizeof(dp)) ;
    for(ll i = 0 ; i<= min(a,b) ; i++) dp[i][i] = 0 ; 
    for(ll i = 2 ; i<=a ; i++){
        dp[i][1] = min(dp[i][1] , 1+dp[i/2][1]+dp[i-i/2][1]) ; 
        dp[1][i] = min( dp[1][i] , 1+dp[1][i/2]+dp[1][i-i/2]) ; 
    }
    rep(i,10){
        rep(j,10){
            cout<<dp[i][j] ;
        }
        cout<<endl ;
    }
    cout<<dp[a][b] ;
    return 0 ;
}
 
