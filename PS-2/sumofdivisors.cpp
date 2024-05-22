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
    get(n) ;
    ll ans=0 ; 
    ll i = 1 , len , temp ;
    while(i*i <= n ){
        ans = ( ans + (n/i)*i)%mod ; i++ ;
    }
   ll  ni = n/i ;
    
     while(i<=n){
        len = (n%i)/ni+1; 
        //temp = (((i+i+len-1)%mod)*(len%mod))%mod;
        if(len%2){
            temp = ((((i+i+len-1)/2)%mod)*(len%mod))%mod;
        }
        else{
            temp = (((i+i+len-1)%mod)*((len/2)%mod))%mod;
        }
        ans = (ans + ((ni%mod)*temp))%mod ;
        // if(temp%2==0){
        //     temp/=2 ;
        //     ans = (ans + (ni%mod)*temp)%mod ;
        // }
        // else{
            
        //     ans = (ans + ((ni/2)%mod)*(temp) )%mod ;
        // }
        //cout<<i<<" "<<ni<<" "<<temp<<endl ;
        if(ni==1) break;
        i = i+len ; ni = n/i ;
    }
    cout<<ans ;
    return 0 ;
}   