#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;
    int ans=0;int rep=0;
    for (int i = 1; i < s.size(); i++)
    {
        if(s[i]==s[i-1]){
            rep++;ans=max(ans,rep);
        }
        else{
            rep=0;
        }
    }
    cout<<ans+1;
}