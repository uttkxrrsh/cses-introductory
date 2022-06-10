#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define pp pop_back
#define rep(a, b) for(auto i=a; i<b; i++)
#define repe(a, b) for(auto i=a; i<=b; i++)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define all(x) x.begin(), x.end()
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    string s0;
    getline(cin, s0);
    vector<string> ans;
    sort(all(s0));
    do{
        ans.pb(s0);
    } while(next_permutation(all(s0)));
    cout<<ans.size()<<'\n';
    for(auto i: ans){
        cout<<i<<'\n';
    }
    return 0;
}