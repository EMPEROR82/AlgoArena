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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll x , n ; cin>>x>>n ; 
    vi a(n) ; 
    set<ll> s ; 
    s.insert(0) ; s.insert(x) ;
    multiset<ll> d ; 
    d.insert(x) ;
    for(ll i=0 ;i<n ; i++){
        cin>>a[i];
        auto it = s.upper_bound(a[i]) ;
        
        //cout<<*it<<" "<<*(--it)<<" "<<endl  ;
        ll r = *(it) , l =*(--it) ; 
        auto t = d.find(r-l) ; 
        d.erase(t) ;
        s.insert(a[i]) ;
        d.insert(a[i]-l) ; d.insert(r-a[i]) ;
        t = d.end() ; --t ;
        cout<<*t<<" " ;
        
    }
    return 0 ; 
}