#include<bits/stdc++.h>
using namespace std; 

#define ll long long int 
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pb push_back 
#define rep(i,n) for(ll i=0 ; i< n; i++)   

const ll mod = 1e9+7 ;
const ll N = 350000 ; 

ll dp[1001][1001] ;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("paintbarn.in", "r", stdin);
    freopen("paintbarn.out", "w", stdout);
  ll n, k , x1 , y1 , x2 , y2 , ans =  0 ;
  cin >> n >> k;
  while(n--) {
    
    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = x1; i < x2; i++) {
      dp[i][y1]++;
      dp[i][y2]--;
    }
  }
  rep(i,1000){
    rep(j,1000){
      if(dp[i][j] == k) ans++;
      dp[i][j+1] += dp[i][j];
    }
  }
  cout << ans << endl;
    return 0;  
}
