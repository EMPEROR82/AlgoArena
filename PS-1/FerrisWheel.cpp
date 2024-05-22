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
    ll n,x ; cin>>n>>x ;
    vi p(n) ; rep(i,n) cin>>p[i] ;
    sort(p.begin() , p.end()) ;
    ll count =0 , l=0 , r=n-1 ;
    while(l<=r){
         if(l!=r) {
             if(p[l]+p[r] <= x){
                l++ ; r--; count++ ;
            }
            else{
                count++ ; r-- ;
            }
         }
         else{
             count++ ; r-- ;
         }
    }
    cout<<count;
    return 0; 
}