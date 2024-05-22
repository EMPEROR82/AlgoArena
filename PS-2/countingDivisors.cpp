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
const long long int mod1= 1e9+6 ;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vi prime; 
    vector<bool> v(1001 , true ) ; 
    v[0] = false  ; v[1] = false ; 
    for( ll i=2 ; i<1001 ; i++){
        if(v[i]){
            for(ll j = i*i ; j<1001 ; j+= i){
                v[j] = false ;
            }
            prime.pb(i) ;
        }
    }
    ll n , x ; cin>>n ; 
    
    while(n--){
        cin>>x ; 
        ll ans =  1 ;
        for(ll i=0 ; prime[i]*prime[i] <= x && i<(ll)prime.size(); i++){
            ll count  =0 ;
            while(x%prime[i]==0){
                x/=prime[i] ; count++ ;
            }
            ans *= (count+1) ;
        }
        if(x!=1) ans*=2 ;
        cout<<ans<<endl ;
    }
    return 0 ;
}    