#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    long long sum = (1ll*n*(n+1))>>1;
    n--;
    int a;
    while(n--){
        cin>>a;
        sum-=a;
    }
    cout<<sum;
}