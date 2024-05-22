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

vi p ; 
vector<bool> is_prime(1001 , true ) ;
 
ll bin_exp( ll a , ll b , ll m){ 
        if(a==1LL ) return (ll)1 ;
        ll prod = 1; 
        while(b){
            if( b & 1){
                prod = (prod*a) % m ;
            }
            a = (a*a)%m ;
            b/=2;
        } 
    return prod  ;   
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    get(n) ; 
    ll x , p ; 
    vi a(n) , b(n) ; ll  c = 1 , c2= 1 , sum = 1 , product = 1 , temp ; 
    ll value = bin_exp(2LL , (ll)(5e8+1), mod-1) ; 
    rep(i,n){
        cin>>x>>p ;
        a[i] = x ; b[i] = p ;
        c = (c*(p+1))%mod ;
        temp = (bin_exp(x-1 , mod-2 , mod )*(bin_exp(x , p+1 , mod)-1))%mod;
        sum = (sum*temp)%mod ;
        
    }
    ll flag = 0 ; 
    rep(i,n){
        if(flag == 0 && b[i]%2==1){
            c2 = (c2*((b[i]+1)/2))%mod1 ; flag++ ;
        }
        else c2 = (c2*(b[i]+1))%mod1 ;
    }
    if(flag==0){
        rep(i,n) b[i]/=2  ;
    }
    ll N =1 ;
    rep(i,n){
        N = (N*bin_exp(a[i] , b[i] , mod ))%mod  ; 
    }
    cout<<c<<" "<<sum<<" "<<bin_exp(N , c2 , mod) ; 
    return 0 ;
}