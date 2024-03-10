#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    if(n==2||n==3){cout<<"NO SOLUTION";return 0;}
    int a=1;
    int b=n/2+1;
    for (int i = 0; i < n; i++)
    {
        if(i&1){
            cout<<a++<<" ";
        }
        else{
            cout<<b++<<" ";
        }
    }
}