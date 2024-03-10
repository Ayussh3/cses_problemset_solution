#include <bits/stdc++.h>
using namespace std;

void recur(int no,int a,int b,int c){
    if(no==1){cout<<a<<" "<<c<<'\n';return;}
    recur(no-1,a,c,b);
    cout<<a<<" "<<c<<'\n';
    recur(no-1,b,a,c);
}

int main(){
    int n;cin>>n;
    cout<<pow(2,n)-1<<'\n';
    recur(n,1,2,3);
}