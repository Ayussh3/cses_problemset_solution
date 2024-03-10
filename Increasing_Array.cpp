#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;n--;
    long long ans=0;
    int prev;cin>>prev;
    int a;
    while(n--){
        cin>>a;
        if(a<prev){
            ans+=prev-a;
        }
        prev=max(a,prev);
    }
    cout<<ans;
}