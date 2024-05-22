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
    ll n ,m,k; cin>>n>>m>>k;
    vi a(n) , b(m) ; 
    rep(i,n) cin>>a[i] ; 
    rep(i,m) cin>>b[i] ;
    sort(a.begin() , a.end()) ;
    sort(b.begin() , b.end()) ;
    ll i=0 , j=0 , count=0 ;
    while(i<n && j<m){
        if(a[i]-k <= b[j] && b[j]<= a[i]+k){
            count++  ; i++ ; j++ ;
        }
        else if( a[i]-k > b[j] ){
            j++ ; 
        }
        else i++ ;
    }
    cout<<count;
    return 0; 
}
