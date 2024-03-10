#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    long long prev=0;cout<<prev<<'\n';
    if(n>=2){prev=6;cout<<prev<<'\n';}
    if(n>=3){prev=28;cout<<prev<<'\n';}   
    for (int i = 4; i < n+1; i++)
    {
        prev+=1ll*(i-1)*(i-1)*(2*i-1)+1ll*(2*i-1)*(i-1);
        prev-=(i-4)*8+16;
        cout<<prev<<'\n';
    }
}