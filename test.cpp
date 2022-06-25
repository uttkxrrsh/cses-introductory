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

ll pass(ll &ways, ll &number){
    if(number >10){
        ++ways;
    }
    if(number ==2){
        return 0;
    }
    return pass(ways, --number);
}
int main(){
    FAST
    ll ways = 20;
    ll number = 21;
    pass(ways, number);
    cout << "ways: "<< ways<< " number: "<< number;
    return 0;
}