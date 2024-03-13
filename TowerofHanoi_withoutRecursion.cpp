#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    cout<<pow(2,n)-1<<'\n';
    stack<tuple<int, int, int, int>> stall;
    stall.push({n, 1, 2, 3});
    while(!stall.empty()){
        int nd,sr,us,des;
        tie(nd,sr,us,des) = stall.top();
        stall.pop();
        if(nd==1){cout<<sr<<" "<<des<<'\n';continue;}
        stall.push({nd-1,us,sr,des});
        stall.push({1,sr,us,des});
        stall.push({nd-1,sr,des,us});
    }    
}