#include <bits/stdc++.h>
using namespace std;

void ecur(string &s,int ind){
    s[ind]=(s[ind]=='0'? '1':'0');
    cout<<s<<'\n';
    if (ind=='0') return;
    for (int i = 0; i < ind; i++)
    {
        ecur(s,i);
    }
}

int main(){
    int n;cin>>n;string s;
    random_device rd;  // Random device for seeding
    mt19937 gen(rd()); // Mersenne Twister pseudo-random number generator
    uniform_int_distribution<int> dis(0, 1);
    for (int i = 0; i < n; i++)
    {  
        s.push_back('0'+(dis(gen)));
       //doesnt matter initial value is 0 or 1
    }
    cout<<s<<'\n';
    for (int i = 0; i < n; i++)
    {
        ecur(s,i);
    }
}