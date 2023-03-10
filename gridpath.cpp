#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define pb push_back
#define ln '\n'
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

vector<vector<bool>> visited(7, vector<bool> (7,false));

int main(){
    FAST
    string path;
    getline(cin,path);

    return 0;
}

//cses problem grid path
 int getpath(int r, int c, int path, int &count){

    `
    if(r==6 && c == 6){
        count++;
    }

    visited[r][c] = true;
    if(r<6 && !visited[r+1][c]){
        path++;
        getpath(r+1,c,path);
        path--;
    }
    if(r>0 && !visited[r-1][c]){
        path++;
        getpath(r-1,c,path);
        path--;
    }
    if(c<6 && !visited[r][c+1]){
        path++;
        getpath(r,c+1,path);
        path--;
    }
    if(c>0 && !visited[r-1[c]]){
        path++;
        getpath(r-1,c,path);
        path--;
    }
    visited[r][c] = false;
}