#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"
#define pb push_back
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;

vvi board;
int cnt=0;
vii pos;
bool condi(int x,int y){
    for (int i = 0; i < pos.size(); i++)
    {
        if(pos[i].first==x||pos[i].second==y||abs(pos[i].first-x)==abs(pos[i].second-y)){return false;}
    }
    return true;
}
void back(int rows){
    if(rows==7){
        for (int i = 0; i < 8; i++)
        {   if(board[i][rows]=='.' && condi(i,rows)){
            cnt++;
        }
        }
    }
    for (int i = 0; i < 8; i++)
    {   if(board[i][rows]=='.' && condi(i,rows)){
        pos.pb({i,rows});
        back(rows+1);
        pos.pop_back();
    }
    }
}
 
void comeon(){
    for (int i = 0; i < 8; i++)
    {   board.pb({});
        for (int j = 0; j < 8; j++)
        {
            char tmp;cin>>tmp;
            board[i].pb(tmp);
        }
    }
    back(0);
    cout<<cnt;    
}
 
int main() {
    fastio();
    
    int TC =1;
    //cin >> TC;
    while(TC--) comeon();
 
}