#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;long long ans=1;
        int p=max(x,y);
        int m=min(x,y);
        if((p&1 && m==y)|| (!(p&1) && m==x )){
            ans=1ll*(p-1)*(p-1)+m;
        }
        else{
            ans=1ll*(p)*(p)-m+1;
        }
        cout<<ans<<'\n';
    }
}