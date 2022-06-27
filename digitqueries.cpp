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

int main(){
    FAST
    ll value,start,numofdigits,end;
    w(x){
        cin>>value;
        start=0;
        end=0;
        rep(i,0LL,1e18){
            start = end+1;
            if(value<(end+=(i+1LL)*9*pow(10,i))){
                numofdigits =0;
                break;
            }                
        }

    }
    return 0;
}