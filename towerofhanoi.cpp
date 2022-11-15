#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define pp pop_back
#define rep(i, a, b) for(int i=a; i<b; i++)
#define repe(i, a, b) for(int i=a; i<=b; i++)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define all(x) x.begin(), x.end()
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void toh(int n,int start,int aux, int end){
    if(n == 0){
        return;
    }
    toh(n-1,start,end,aux);
    cout<<start<<" "<<end<<'\n';
    toh(n-1,aux,start,end);
    return;
}

int main(){
    FAST
    ll n;
    cin>>n;
    cout<<pow(2,n)-1<<'\n';
    toh(n,1,2,3);
    return 0;
}
