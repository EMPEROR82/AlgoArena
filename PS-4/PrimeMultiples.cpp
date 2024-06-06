#include<bits/stdc++.h>
 
using namespace std ; 
#define ll long long int 
const long long int mod = 1e9+7 ; 
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pb push_back 
#define get(a) ll a ; cin>>a ;
#define rep(i,n) for(ll i=0;i<n;i++)
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n , k , ans =0 ; 
    cin>>n>>k ;
    vi a(k) ; rep(i,k) cin>>a[i] ; 
    sort(a.begin() , a.end()) ;
    ll t = (1<<k) , flag[2] ; flag[0] = 1 ; flag[1] = -1 ;
    rep(i,t){
        ll cnt = 0 , b = 0 ,  temp = n  ;
        while((1<<b)<=i){
            if((1<<b)&i){
                cnt++;
                temp = temp/a[b] ;
            }
             b++  ;
        }
        if(cnt){
            ans += flag[(n-cnt)%2]*temp ; 
        }
    }
    cout<<abs(ans) ;
    return 0 ;
