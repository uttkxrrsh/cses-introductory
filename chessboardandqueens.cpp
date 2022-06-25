#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define pp pop_back
#define rep(i, a, b) for(auto i=a; i<b; i++)
#define repe(i, a, b) for(auto i=a; i<=b; i++)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define all(x) x.begin(), x.end()
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;


void search(bool col[8],bool diag1[16],bool diag2[16],bool reserved[8][8],ll &r,ll &ways){
    if(r == 8){
        ++ways;
        return;
    }
    rep(c,0LL,8LL){
        if(col[c] || diag1[r+c] || diag2[r-c+7] || reserved[r][c]){
            continue;
        }
        col[c] = diag1[r+c] = diag2[r-c+7] = true;
        search(col,diag1,diag2,reserved,++r,ways);
        --r;
        col[c] = diag1[r+c] = diag2[r-c+7] = false;
    }
}

int main(){
    FAST
    string input;
    bool col[8] = {false},diag1[16] = {false},diag2[16] = {false},reserved[8][8];
    ll ways=0, r=0;
    rep(i,0,8){
        cin>>input;
        rep(j,0,8)
            reserved[i][j] = (input[j] == '*');
    }
    search(col,diag1,diag2,reserved,r,ways);
    cout<<ways;
    return 0;
}