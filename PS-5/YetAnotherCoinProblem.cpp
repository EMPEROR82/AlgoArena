
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while (t--){
        long long int n;
        
        cin>>n;
        long long int ans=n;
        for(int i=0;i<=2;i++){
            for(int j=0;j<=1;j++){
                for (int k=0;k<=2;k++){
                    for (int l=0;l<=2;l++){ 
                        long long int temp;
                        temp=i*1+j*3+k*6+l*10;
                        if((n-temp)%15==0&&n>=temp){
                            ans =min(ans,i+j+k+l+(n-temp)/15);
                            
                        }
                        
                    }
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
