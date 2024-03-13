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

void comeon(){
   
    for (int i = 0; i < 8; i++)
    {   board.pb({});
        for (int j = 0; j < 8; j++)
        {
            char tmp;cin>>tmp;
            board[i].pb(tmp);
        }
    }
    stack<pii> dfs;
 
 for (int i = 7; i >=0 ; i--) {
        dfs.push({i, 0});
    }
 
    
    while (!dfs.empty()) {
        pii fr = dfs.top();
        int i = fr.first;
        int rows = fr.second;
        dfs.pop();
 
        // Backtrack
        while (pos.size() > 0 && rows <= pos[pos.size() - 1].second) {
            {pos.pop_back();}
        }
 
        // Check if the row is at the end
        if (rows == 7) {
            if (board[i][rows] == '.' && condi(i, rows)) {
                cnt++;
                continue;
            }
        }
 
        // If not at the end of the row, continue DFS kinda iteration
        if (board[i][rows] == '.' && condi(i, rows)) {
            pos.push_back(fr);
            for (int j = 7; j >=0; j--) {
                dfs.push({j, rows + 1});
            }
        }
    }
    cout<<cnt;
}
 
int main() {
    fastio();
    
    int TC =1;
    //cin >> TC;
    while(TC--) comeon();
 
}