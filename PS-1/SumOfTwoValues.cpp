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
    ll n,  x ; cin>>n>>x ; 
    vi a(n) ; map<ll,vi>  m; 
    rep(i,n){
        cin>>a[i] ; 
        m[a[i]].pb(i+1) ;
    }
    ll flag = 0 , t ; 
    if(x%2==0) {t = x/2 ; flag = 1; }
    
    if(flag && m[t].size()>=2){
        for(ll i=0 ; i<2 ; i++) cout<<m[t][i]<<" " ; 
    }
    else{
        flag =0 ;
        rep(i,n){
            if(a[i]!=t){
                if(!m[x-a[i]].empty()){
                    flag = 1 ; 
                    cout<<m[a[i]].front()<<" "<<m[x-a[i]].front(); 
                    break ; 
                }
            }
        }
    }
    if(flag == 0 ) cout<<"IMPOSSIBLE" ;
    return 0 ; 
}
