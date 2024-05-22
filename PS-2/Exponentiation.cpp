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

void solve(){
    ll a , b ; cin>>a>>b ; 
    if(b==0 ){ cout<<1<<endl ; return ; }
    ll prod = 1; 
    while(b){
        if( b & 1){
            prod = (prod*a) % mod ;
        }
        a = (a*a)%mod ;
        b/=2;
    }
    cout<<prod<<endl ;
} 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n ; cin>>n ; 
    while(n--) solve() ;
    return 0 ;
}    
