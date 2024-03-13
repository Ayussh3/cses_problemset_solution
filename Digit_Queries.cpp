#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    while(n--){
        long long k;cin>>k;
        long long ab=0;long long term=1;
        for (int i = 1; ; i++)
        {
            ab+=i*(term*10-term);
            if(k<=ab){
                ab-=i*(term*10-term);
                long long rem=k-ab;
                long long fac=(rem+i-1)/i;
                long long mo=(rem-1)%i;mo=i-mo;
                long long nu=term+fac-1;
                int dw;
                while(mo--){
                    dw=nu%10;
                    nu/=10;
                }         
                cout<<dw<<endl;break;
            }
            term*=10;
        }

    }
}