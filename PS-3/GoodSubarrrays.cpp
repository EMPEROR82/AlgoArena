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
const ll mod = 1e9+7 ;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n , t ; string s ; 
    cin>>t ;
    while(t--){
        cin>>n>>s ; 
        vi csum(n+1 , 0 ) ;
        map<ll,ll> m ; 
        m[csum[0]]++ ;
        ll ans = 0;
        rep(i,n){
            csum[i+1] = csum[i]+(s[i]-'0');
            ans+= m[csum[i+1]-i-1]++ ;
        }
        cout<<ans<<endl ;
    }
    return 0 ; 
}