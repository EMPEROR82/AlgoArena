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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t ; cin>>t ; 
    while(t--){
        ll n, temp=0 ; cin>>n ; 
        ll ans = 0; 
        vi a(n) ; rep(i,n){ cin>>a[i] ; temp = temp|a[i];}  
        for(ll i=0 ; i<20 ; i++){
            ll r = 1<<i , t1 = 0 ;
            vi v ; 
            if(temp & r){
                
               v.pb(-1) ; 
                for(ll i=0 ; i<n ; i++){
                    if((r & a[i])) v.pb(i) ; 
                }
                v.pb(n) ; 
                for(ll i=0 ; i<v.size()-1 ; i++){
                    t1 = max(t1 , v[i+1]-v[i]) ;
                }
                ans = max(ans , t1) ;
            }
            
             
        }
        if(temp==0) ans = 1;
        cout<<ans<<endl ;
    }
    return 0; 
}
 