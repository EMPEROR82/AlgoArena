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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n ;cin>>n ;
    vi a(n) , b(n) ; 
    rep(i,n) cin>>a[i]>>b[i] ; 
    sort(a.begin() , a.end()) ; 
    sort(b.begin() , b.end()) ; 
    ll i=1 , j=0 , count = 1 , t = a[0] , ans= 1; 
    // for(auto it : a) cout<<it<<" " ;
    // cout<<endl ;
    // for(auto it : b) cout<<it<<" " ; 
    cout<<endl ;
    while(i<n && j<n ){
        if(b[j]>a[i]){
             t = a[i] ; i++ ; count++  ;
        }
        else{
            count-- ; t=b[j] ; j++ ;
        }
        ans = max(ans , count ) ;
    }
    
    cout<<ans<<endl ;
    return 0 ; 
}
