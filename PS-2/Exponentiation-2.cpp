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

void solve(){
    ll a , b , c ; cin>>a>>b>>c ; 
    
    ll prod1 = 1 , prod2=1; 
    while(c){
        if( c & 1){
            prod1 = (prod1*b) % mod1 ;
        }
        b = (b*b)%mod1 ;
        c/=2;
    }
    while(prod1){
        if(prod1 & 1){
            prod2 = (prod2*a)%mod ;
        }
        a = (a*a)%mod ;
        prod1/= 2;
    }
    cout<<prod2<<endl ;
} 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n ; cin>>n ; 
    while(n--) solve() ;
    return 0 ;
}    