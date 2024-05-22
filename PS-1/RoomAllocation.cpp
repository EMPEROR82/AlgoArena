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
    ll n ; cin>>n ;
    vector<pair<pair<ll,ll>,ll>> a(n) ; 
    vi ans(n) ;
    rep(i,n){
        cin>>a[i].f.f>>a[i].f.s ;
        a[i].s = i ;
    }
    sort(a.begin() , a.end()) ;
    //rep(i,n) cout<<a[i].f.f<<" "<<a[i].f.s<<" "<<a[i].s<<endl ;
    multiset<pair<ll,ll>> q ; 
    ll i=1 , rooms = 1;
    q.insert({a[0].f.s , rooms}) ;
    ans[a[0].s] = 1 ;
    while(i<n){
        auto p  = *q.begin();
        //cout<<"hi"<<p.f<<" "<<p.s<<endl ;
        if( p.f < a[i].f.f ){
           // cout<<"hi" ;
            q.erase(q.begin());
            q.insert({a[i].f.s , p.s}) ;
            ans[a[i].s] = p.s ;
        }
        else{
            rooms++ ;
            q.insert({a[i].f.s , rooms}) ;
            ans[a[i].s] = rooms ;
        }
        i++ ;
    }
    cout<<rooms<<endl;
    for(auto it : ans) cout<<it<<" ";
    return 0 ; 
}